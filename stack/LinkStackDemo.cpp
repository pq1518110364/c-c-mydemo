//
// Created by 向威 on 2021/4/26.
//

#include "LinkStackDemo.h"

// 读取栈顶的元素
int top(struct LinkStack s)
{
    return (s.pNode) -> data;
}

// 向栈顶压入新的元素
int push(int data,struct LinkStack *s)
{
    struct Node *n = (struct Node*) malloc(sizeof(struct Node)); // 创建新的内存空间以便存放链表的元素
    n -> data = data; // 把数据塞到节点里
    if (s -> pNode == NULL)
    {
        n -> pNext = NULL; // 设置栈底的指针为空
    } else {
        n -> pNext = s -> pNode; // 设置上一个节点的指针
    }
    s -> pNode = n; // 设置栈顶的节点指针
    (s -> size) ++; // 元素数量+1
    return data;
}

// 删除栈顶的元素
void pop(struct LinkStack *s)
{
    struct Node *current = s -> pNode; // 获得当前节点
    if (current -> pNext != NULL) s -> pNode = current -> pNext; // 如果没到栈底，那就把d栈顶元素指向下一个节点
    else s -> pNode = NULL; // 到链表底部了，那就把栈的指针指向空
    free(current); // 释放移除元素的内存空间
    (s -> size) --; // 元素数量-1
}

// 看栈是否为空
int empty(struct LinkStack s)
{
    return s.size == 0;
}