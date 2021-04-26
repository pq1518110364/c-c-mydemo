//
// Created by 向威 on 2021/4/26.
//

#ifndef MYDEMO_LINKSTACKDEMO_H
#define MYDEMO_LINKSTACKDEMO_H
#include "../universal/Universal.h"


// 每个节点
struct Node
{
    int data; // 数据
    struct Node *pNext; // 下一个数据的指针
};

// 栈结构体
struct LinkStack
{
    struct Node *pNode; // 当前元素的指针
    int size; // 数量
};

int top(struct LinkStack s);
int push(int data,struct LinkStack *s);
void pop(struct LinkStack *s);
int empty(struct LinkStack s);


class LinkStackDemo {

};


#endif //MYDEMO_LINKSTACKDEMO_H
