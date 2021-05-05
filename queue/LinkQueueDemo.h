//
// Created by 向威 on 2021/5/4.
//
#include "../universal/Universal.h"

#ifndef MYDEMO_QUEUEDEMO_H
#define MYDEMO_QUEUEDEMO_H

typedef struct QNode{
    char data;
    struct QNode *next;
}QNode,QueuePtr;
typedef struct {
    QueuePtr *front;//对头指针
    QueuePtr *rear;//队尾指针
}LinkQueue;

LinkQueue *creatLinkQueue();//创建空的
void initLinkQueue(LinkQueue *linkQueue);//初始化
bool isEmpty(LinkQueue *linkQueue);//判空
void enQueue(LinkQueue *linkQueue,char data);//入队
bool deQueue(LinkQueue *linkQueue,char &data);//出队

class LinkQueueDemo {

};


#endif //MYDEMO_QUEUEDEMO_H
