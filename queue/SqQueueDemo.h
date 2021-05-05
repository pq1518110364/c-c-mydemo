//
// Created by 向威 on 2021/5/4.
//

#ifndef MYDEMO_SQQUEUEDEMO_H
#define MYDEMO_SQQUEUEDEMO_H

#include "../universal/Universal.h"
#define MAX_SIZE 50 //最大个数
typedef struct {
    char data[MAX_SIZE];//存放队列元素
    int front,rear;//对头指针
}SqQueue;

SqQueue *creatSqQueue();//创建空的
void initSqQueue(SqQueue *sqQueue);
Status EnQueue(SqQueue *sqQueue,char data);
Status DeQueue(SqQueue *sqQueue,char &data);
bool isEmpty(SqQueue *sqQueue);
class SqQueueDemo {

};


#endif //MYDEMO_SQQUEUEDEMO_H
