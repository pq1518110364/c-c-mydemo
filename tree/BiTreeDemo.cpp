//
// Created by 向威 on 2021/5/4.
//

#include "BiTreeDemo.h"
#include "../stack/SqStackDemo.h"
char bt[MAX_TREE_SIZE];
int n = strlen(bt);

void visit(const BiTNode *root);

void visitThreadNode(ThreadNode *pNode);

//创建树
BiTNode *createBTree(){
    BiTNode *biTree= (BiTNode*)malloc(sizeof (BiTNode));
    if (!biTree){
        exit(OVERFLOW);
    }
    return biTree;
};

BiTNode *initBTree(BiTNode *biTree){
    std::cout << "---请输出字符，多个空格隔开，回车结束---" <<std::endl;
    char c;
    int i=0;
    char data;
    while((c=getchar())!='\n')
    {
            ungetc(c,stdin);
            cin>>data;
            bt[i++]=data;
    }
    n=i;
    biTree->data=bt[0];
    biTree=transform(biTree, 1);
    return biTree;
}

BiTNode *transform(BiTNode *root, int k) {
    if(k>n||bt[k-1]=='#'){
        return NULL;
    }
    else{
        root= new BiTNode(bt[k - 1]);
        root->lChild= transform(root->lChild, 2 * k);
        root->rChild= transform(root->rChild, 2 * k + 1);
    }
    return root;
}

void inOrder(BiTNode *root){
    if(root!= nullptr){
        inOrder(root->lChild);
        visit(root);
        inOrder(root->rChild);
    }
}

void inOrder2(BiTNode *biTree) {
    //    SqStack *stack = createSqStack();
//    BiTNode *p=biTree;
//    while (p||isEmpty(stack)){
//        if (p){
//            push(stack,p);
//            p=p->lChild;
//        }else{
//            pop(stack,p);
//            cout<<p->data<<" ";
//            p=p->rChild;
//        }
//    }
    if (biTree!= nullptr){
        BiTNode *stack[MAX_TREE_SIZE];
        int top=-1;
        BiTNode *p=biTree;
        stack[++top]=biTree;
        while (top!=-1||p!= nullptr){
            while (p!= nullptr){
                stack[++top]=p;
                p=p->lChild;
            }
            if(top!=-1){
                p=stack[top--];
                visit(p);
                p=p->rChild;
            }
        }
    }
}

void visit(const BiTNode *root) {
    if(root->data != '0'){
        cout<<root->data<<" ";
    }
};

void preOrder2(BiTNode *biTree){

    if (biTree!= nullptr){
        BiTNode *stack[MAX_TREE_SIZE];
        int top=-1;
        BiTNode *p=nullptr;
        stack[++top]=biTree;
        while (top!=-1){
            p=stack[top--];
            visit(p);
            if (p->rChild!= nullptr){
                stack[++top]=p->rChild;
            }
            if(p->lChild!= nullptr){
                stack[++top]=p->lChild;
            }
        }
    }
};//非递归

void preOrder(BiTNode *root){
    if(root!= nullptr){
        if(root->data!='0') {
            cout <<root->data << " ";
        }
        preOrder(root->lChild);
        preOrder(root->rChild);
    }
};
void postOrder(BiTNode *root){
    if(root!= nullptr){
        postOrder(root->lChild);
        postOrder(root->rChild);
        if(root->data!='0'){
            cout<<root->data<<" ";
        }
    }
};

void postOrder2(BiTNode *root){
    if(root!= nullptr){
        postOrder(root->lChild);
        postOrder(root->rChild);
        if(root->data!='0'){
            cout<<root->data<<" ";
        }
    }
};

void levelOrder(BiTNode *root){
    BiTNode *p;
    BiTNode *queue[MAX_TREE_SIZE];
    int rear,front;
    rear=front=0;
    queue[rear++]=root;
    while (rear!=front){
        p=queue[front++];
        visit(p);
        if (p->lChild!= nullptr){
            queue[rear++]=p->lChild;
        }
        if (p->rChild!= nullptr){
            queue[rear++]=p->rChild;
        }
    }
};

int btDepth(BiTNode *root){
    if (root== nullptr)
        return 0;
    int lDep =btDepth(root->lChild);
    int rDep =btDepth(root->rChild);
    return lDep>rDep?++lDep:++rDep;
}//树的高度

int btDepth2(BiTNode *root){
    BiTNode *p;
    BiTNode *queue[MAX_TREE_SIZE];
    int rear,front,last,level;
    rear=front=-1;
    level=last=0;
    queue[++rear]=root;
    while (rear!=front){
        p=queue[++front];
        if (p->lChild!= nullptr){
            queue[++rear]=p->lChild;
        }
        if (p->rChild!= nullptr){
            queue[++rear]=p->rChild;
        }
        if (front==last){//最右层节点
            level++;//层数加一
            last=rear;//last下一层
        }

    }
    return level;
}
void findXAncestor(BiTNode *bt,char x){
    stackAncestor stack1[MAX_TREE_SIZE];
    int top=0;
    while (bt!= nullptr||top>0){
        while (bt!= nullptr&&bt->data!=x){
            stack1[++top].t=bt;
            stack1[top].tag=0;
            bt=bt->lChild;
        }
        if (bt!= nullptr&&bt->data==x){
            cout<<"x的祖先";
            for (int i = 1; i <= top; i++) {
                cout<<stack1[i].t->data;
            }
            cout<<endl;
            exit(1);
        }
        while (top!=0&&stack1[top].tag==1){
            top--;
        }
        if (top!=0){
            stack1[top].tag=1;
            bt=stack1[top].t->rChild;
        }
    }
};//找指定元元素的所有祖先

//创建树
ThreadNode *createThreadNode(){
    auto *biTree= (ThreadNode*)malloc(sizeof (ThreadNode));
    if (!biTree){
        exit(OVERFLOW);
    }
    return biTree;
};

ThreadNode *initThreadNode(ThreadNode *biTree){
    std::cout << "---请输出字符，多个空格隔开，回车结束---" <<std::endl;
    char c;
    int i=0;
    char data;
    while((c=getchar())!='\n')
    {
        ungetc(c,stdin);
        cin>>data;
        bt[i++]=data;
    }
    n=i;
    biTree->data=bt[0];
    biTree=transformTN(biTree, 1);
    return biTree;
}

ThreadNode *transformTN(ThreadNode *root, int k) {
    if(k>n||bt[k-1]=='#'){
        return nullptr;
    }
    else{
        root= new ThreadNode(bt[k - 1]);
        root->lChild= transformTN(root->lChild, 2 * k);
        root->rChild= transformTN(root->rChild, 2 * k + 1);
    }
    return root;
}
void inThread(ThreadNode *tn,ThreadNode *pre){
    if(tn!= nullptr){
        inThread(tn->lChild,pre);//左子树
        if(tn->lChild== nullptr){
            tn->lChild=pre;
            tn->lTag=1;
        }
        if(pre!= nullptr&&pre->rChild== nullptr){
            pre->rChild=tn;
            pre->rTag=1;
        }
        pre=tn;//标记当前节点为刚刚访问的节点
        inThread(tn->rChild,pre);//右子树
    }
}//中序建立索引二叉树

void preThread(ThreadNode *tn,ThreadNode *pre){
    if(tn!= nullptr){
        if(tn->lChild== nullptr){
            tn->lChild=pre;
            tn->lTag=1;
        }
        if(pre!= nullptr&&pre->rChild== nullptr){
            pre->rChild=tn;
            pre->rTag=1;
        }
        pre=tn;//标记当前节点为刚刚访问的节点，TODO 回到b时？pre不是d还是跟着回到b？
        //死循环判断
        if (tn->lTag==0){
            preThread(tn->lChild,pre);//左子树
        }
        if (tn->rTag==0){
            preThread(tn->rChild,pre);//右子树
        }
    }
}//前序建立索引二叉树
//遍历
void preOrder(ThreadNode *td){
    if (td!= nullptr){
        ThreadNode *p=td;
        while (p!= nullptr){
            while (p->lTag==0){
                visitThreadNode(p);
                p=p->lChild;
            }
            visitThreadNode(p);
            p=p->rChild;
        }
    }
}

void visitThreadNode(ThreadNode *pNode) {
    if (pNode!= nullptr&&pNode->data!='0'){
        cout<<pNode->data;
    }
};//访问

void postThread(ThreadNode *tn,ThreadNode *pre){
    if(tn!= nullptr){
        postThread(tn->lChild,pre);//左子树
        postThread(tn->rChild,pre);//右子树
        if(tn->lChild== nullptr){
            tn->lChild=pre;
            tn->lTag=1;
        }
        if(pre!= nullptr&&pre->rChild== nullptr){
            pre->rChild=tn;
            pre->rTag=1;
        }
        pre=tn;//标记当前节点为刚刚访问的节点 TODO 递归结束指针指向null
    }
}//后序建立索引二叉树

stackAncestor stack1[MAX_TREE_SIZE];
stackAncestor stack2[MAX_TREE_SIZE];
BiTNode *ancestor(BiTNode *root,BiTNode *p,BiTNode *q) {
    int top=0;
    int top1=0;
    BiTNode *bt=root;
    while (bt!= nullptr||top>0){
        while(bt!= nullptr){
            stack1[++top].t=bt;
            stack1[top].tag=0;
            bt=bt->lChild;//左分支向左
        }
        while (top!=0&&stack1[top].tag ==1){
            //假设p在q左，遇到p，栈中均是p祖先
            if (stack1[top].t==p){
                for (int i = 1; i <=top; ++i) {
                    stack2[i]=stack1[i];
                }
                top1=top;
            }
            if (stack1[top].t==q){
                for (int i = top; i >0 ; --i) {
                    for (int j = top1; j >0; --j) {
                        if (stack2[j].t==stack2[i].t){
                            return stack1[i].t;//找到公共节点
                        }
                    }
                }
            }
            top--;//退栈
        }
        if (top!=0){
            stack1[top].tag=1;
            bt=stack1->t->lChild;
        }
    }
    return nullptr;
};

BiTNode * createBt(char pre[],char in[],int l1,int r1,int l2,int r2){
    //前序遍历和中序遍历确定二叉树
    if (l1>r2){
        return nullptr;
    }
    BiTNode *root=createBTree();
    root->lChild=root->rChild= nullptr;
    root->data=pre[l1];
    int i;
    for (i = l2; i < r2; ++i) {
        if (in[i]==pre[l1])
            break;
    }
    root->lChild=createBt(pre,in,l1+1,l1+i-l2,l2,i-1);
    root->rChild=createBt(pre,in,l1+i-l2+1,r1,i+1,r2);
    return root;
}

BiTNode * createBt2(char post[],char in[],int l1,int r1,int l2,int r2) {
    //后序遍历与中序确定
    //前序遍历和中序遍历确定二叉树
    if (l1>r2){
        return nullptr;
    }
    BiTNode *root=createBTree();
    root->lChild=root->rChild= nullptr;
    root->data=post[r2];
    int i;
    for (i = l2; i < r2; ++i) {
        if (in[i]==post[r2])
            break;
    }
    root->lChild=createBt2(post,in,l1,l1+i-l2-1,l2,i-1);
    root->rChild=createBt2(post,in,l1+i-l2,r1-1,i+1,r2);
    return root;
}
BiTNode *createBt3(char level[],char in[],int n,int l,int r){
    if(l>r)
        return nullptr;
    BiTNode *root=createBTree();
    root->rChild=root->lChild= nullptr;
    root->data=level[l];
    int i = createBt3_Search(in,level[l],l,r);
    int ln=i-l;
    char lLevel[ln];
    int rn =r-i;
    char rLevel[rn];
    createBt3_getSubLevel(lLevel,level,in,n,l,i-1);
    createBt3_getSubLevel(rLevel,level,in,n,i+1,r);
    root->lChild=createBt3(lLevel,in,ln,l,i-1);
    root->rChild=createBt3(rLevel,in,rn,i+1,r);
    return root;
};//层序与中序确定二叉树

int createBt3_Search(char in[],char key,int l,int r){
    for (int i = l; i < r; ++i) {
        if (in[i]==key)
            return i;
    }
    return -1;
};

void createBt3_getSubLevel(char subLevel[],char level[],char in[],int j,int l,int r){
    int k=0;
    for (int i = 0; i < j; ++i) {
        //todo 存在错误
        if (createBt3_Search(in,level[i],l,r)!=-1)
            subLevel[k++]=level[i];
    }
};
