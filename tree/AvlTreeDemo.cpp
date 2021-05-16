//
// Created by 向威 on 2021/5/7.
//

#include "AvlTreeDemo.h"

AvlTree MakeEmpty( AvlTree T )
{
    if( T != NULL )
    {
        MakeEmpty( T->Left );
        MakeEmpty( T->Right );
        free( T );
    }
    return NULL;
}

Position Find( ElementType X, AvlTree T )
{
    if( T == NULL )
        return NULL;
    if( X < T->Element )
        return Find( X, T->Left );
    else if( X > T->Element )
        return Find( X, T->Right );
    else
        return T;
}

Position FindMin( AvlTree T )
{
    if( T == NULL )
        return NULL;
    else if( T->Left == NULL )
        return T;
    else
        return FindMin( T->Left );
}

Position FindMax( AvlTree T )
{
    if( T != NULL )
        while( T->Right != NULL )
            T = T->Right;

    return T;
}


static int Height( Position P )
{
    if( P == NULL )
        return -1;
    else
        return P->Height;
}

static int Max( int Lhs, int Rhs )
{
    return Lhs > Rhs ? Lhs : Rhs;
}


/* This function can be called only if K2 has a left child */
/* Perform a rotate between a node (K2) and its left child */
/* Update heights, then return new root */
//LL型旋转（单次右旋）
static Position SingleRotateWithLeft( Position K2 )
{
    Position K1;

    K1 = K2->Left;          //找到 K2 左子树
    K2->Left = K1->Right;   //将 K1 右子树移到 K2 的左子树
    K1->Right = K2;         //建立 K1 和 K2 的关系

    K2->Height = Max( Height( K2->Left ), Height( K2->Right ) ) + 1;
    K1->Height = Max( Height( K1->Left ), K2->Height ) + 1;

    return K1;  /* New root */
}


/* This function can be called only if K1 has a right child */
/* Perform a rotate between a node (K1) and its right child */
/* Update heights, then return new root */
//RR型旋转（单次左旋）
//RR型与LL型为对称，原理类似
static Position SingleRotateWithRight( Position K1 )
{
    Position K2;

    K2 = K1->Right;
    K1->Right = K2->Left;
    K2->Left = K1;

    K1->Height = Max( Height( K1->Left ), Height( K1->Right ) ) + 1;
    K2->Height = Max( Height( K2->Right ), K1->Height ) + 1;

    return K2;  /* New root */
}


/* This function can be called only if K3 has a left */
/* child and K3's left child has a right child */
/* Do the left-right double rotation */
/* Update heights, then return new root */
//LR型双旋转（ 单次左旋（RR型）后单次右旋（LL型））
static Position DoubleRotateWithLeft( Position K3 )
{
    /* Rotate between K1 and K2 */
    K3->Left = SingleRotateWithRight( K3->Left );

    /* Rotate between K3 and K2 */
    return SingleRotateWithLeft( K3 );
}


/* This function can be called only if K1 has a right */
/* child and K1's right child has a left child */
/* Do the right-left double rotation */
/* Update heights, then return new root */
//RL型双旋转 （ 单次右旋（LL型） 后单次左旋（RR型） ）
static Position DoubleRotateWithRight( Position K1 )
{
    /* Rotate between K3 and K2 */
    K1->Right = SingleRotateWithLeft( K1->Right );

    /* Rotate between K1 and K2 */
    return SingleRotateWithRight( K1 );
}


AvlTree Insert( ElementType X, AvlTree T )
{
    if( T == NULL )
    {
        /* Create and return a one-node tree */
        T = (AvlTree)malloc( sizeof( AvlNode ) );
        if( T == NULL )
            exit(OVERFLOW);
        else
        {
            T->Element = X;
            T->Height = 0;
            T->Left = T->Right = NULL;
        }
    }
    else if( X < T->Element )                              //插入值比当前结点值小，往左子树插入
    {
        T->Left = Insert( X, T->Left );                    //递归插入
        if( Height( T->Left ) - Height( T->Right ) == 2 )  //判断子树是否平衡
            if( X < T->Left->Element )                     //比当前结点左子树的值小，即为左左情形。
                T = SingleRotateWithLeft( T );             //LL旋转（右单旋转）
            else                                           //否则为左右情形
                T = DoubleRotateWithLeft( T );             //LR旋转
    }
    else if( X > T->Element )                              //插入值比当前结点值大，往右子树插入
    {
        T->Right = Insert( X, T->Right );                  //递归插入
        if( Height( T->Right ) - Height( T->Left ) == 2 )  //判断子树是否平衡
            if( X > T->Right->Element )                    //比当前结点右子树大，即为右右情形
                T = SingleRotateWithRight( T );            //RR旋转（左单旋转）
            else                                           //否则为右左情形
                T = DoubleRotateWithRight( T );            //RL旋转
    }
    /* Else X is in the tree already; we'll do nothing */

    T->Height = Max( Height( T->Left ), Height( T->Right ) ) + 1;
    return T;
}


AvlTree Delete(ElementType X,AvlTree T)
{
    if (T == NULL)                        //空树直接返回
        return NULL;
    if (X < T->Element)                   //删除值小于当前节点，说明删除节点在当前节点左侧
    {
        T->Left = Delete(X,T->Left);
        if (Height(T->Right) - Height(T->Left) == 2)
        {
            if (Height(T->Right->Left) > Height(T->Right->Right))
                T = DoubleRotateWithLeft(T);
            else
                T = SingleRotateWithRight(T);
        }
    }
    else if (X > T->Element)             //删除节点在当前节点右侧
    {
        T->Right = Delete(X,T->Right);
        if (Height(T->Left) - Height(T->Right) == 2)
        {
            if (Height(T->Left->Right) > Height(T->Left->Left))
                T = DoubleRotateWithLeft(T);
            else
                T = SingleRotateWithRight(T);
        }
    }
    else                                 //找到删除节点
    {
        if (T->Right)                    //右子树不为空的情况
        {
            AvlTree tmp = T->Right;
            while (tmp->Left != NULL) tmp = tmp->Left;  //找到要删除的结点的右子树的左子树最小值，以便替要删除的结点
            T->Element = tmp->Element;
            T->Height = tmp->Height;
            T->Right = Delete(tmp->Element,T->Right); //递归删除
        }
        else
        {
            //右子树为空的情况，free节点，返回被删除节点的左节点
            //这也是真正删除节点的地方
            AvlTree tmp=T;
            T = T->Left;
            free(tmp);
            return T;
        }
    }
    //每次删除之后，都要更新节点的高度
    T->Height = Max(Height(T->Left),Height(T->Right)) + 1;
    return T;
}

