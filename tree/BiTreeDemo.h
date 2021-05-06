//
// Created by 向威 on 2021/5/4.
//
#include "../universal/Universal.h"
#ifndef MYDEMO_BITREE_H
#define MYDEMO_BITREE_H
typedef struct BiTNode{
    char data; //数据域
    struct BiTNode *lChild,*rChild;//左孩子 右孩子指针
    BiTNode(char d):data(d),lChild(NULL),rChild(NULL){}//构造函数
}BiTNode,*BiTree; //链表
#define MAX_TREE_SIZE 100
typedef char SeqBiTree[MAX_TREE_SIZE];
//SeqBiTree bt;
BiTNode *createBTree();
BiTNode *initBTree(BiTNode *biTNode);
BiTNode *transform(BiTNode *root, int k);
void inOrder(BiTNode *biTree);
void inOrder2(BiTNode *root);//非递归
void postOrder(BiTNode *root);
void preOrder2(BiTNode *biTree);//非递归
void preOrder(BiTNode *root);
void postOrder2(BiTNode *root);
void levelOrder(BiTNode *root);
int btDepth(BiTNode *root);//树的高度
int btDepth2(BiTNode *root);

typedef struct {
    BiTNode *t;
    int tag;//tag==0?左子树访问：右子树访问
}stackAncestor;
void findXAncestor(BiTNode *root,char x);//找指定元元素的所有祖先
//------二叉线索树
typedef struct ThreadNode{
    char data; //数据域
    struct ThreadNode *lChild,*rChild;//左孩子 右孩子指针
    int lTag,rTag;
    ThreadNode(char d):data(d),lChild(NULL),rChild(NULL),rTag(0),lTag(0){}//构造函数
}ThreadNode,*ThreadTree; //链表
ThreadNode *createThreadNode();
ThreadNode *initThreadNode(ThreadNode *threadNode);
ThreadNode *transformTN(ThreadNode *root, int k);
void inThread(ThreadNode *tn,ThreadNode *pre);//中序建立索引二叉树
void preThread(ThreadNode *tn,ThreadNode *pre);//前序建立索引二叉树
void preOrder(ThreadNode *tn);//访问
void postThread(ThreadNode *tn,ThreadNode *pre);//后序建立索引二叉树
BiTNode *ancestor(BiTNode *bt,BiTNode *p,BiTNode *q);//求最近公共节点
BiTNode * createBt(char pre[],char in[],int l1,int r1,int l2,int r2);//前序遍历和中序遍历确定二叉树
BiTNode * createBt2(char post[],char in[],int l1,int r1,int l2,int r2);//后序遍历与中序确定二叉树
BiTNode * createBt3(char level[],char in[],int n,int l,int r);//层序与中序确定二叉树
int createBt3_Search(char in[],char key,int l,int r);
void createBt3_getSubLevel(char lLevel[],char rLevel[],char in[],int j,int l,int r);
#endif //MYDEMO_BITREE_H
