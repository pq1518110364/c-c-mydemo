//
// Created by 向威 on 2021/5/7.
//

#ifndef MYDEMO_AVLTREEDEMO_H
#define MYDEMO_AVLTREEDEMO_H
#include "../universal/Universal.h"
struct AvlNode;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;
typedef char ElementType;
struct AvlNode
{
    ElementType Element;
    AvlTree  Left;
    AvlTree  Right;
    int      Height;
};
Position Find( ElementType X, AvlTree T );
Position FindMin( AvlTree T );
Position FindMax( AvlTree T );
static Position SingleRotateWithLeft( Position K2 );
static Position SingleRotateWithRight( Position K1 );
static Position DoubleRotateWithLeft( Position K3 );
static Position DoubleRotateWithRight( Position K1 );
AvlTree Insert( ElementType X, AvlTree T );
class AvlTreeDemo {

};


#endif //MYDEMO_AVLTREEDEMO_H
