//
// Created by 向威 on 2021/5/4.
//

#include "SqQueueDemo.h"
SqQueue *creatSqQueue(){
    auto *sqQueue= (SqQueue*)malloc(sizeof (SqQueue));
    if (!sqQueue){
        exit(OVERFLOW);
    }
    sqQueue->front=sqQueue->rear=0;
    return sqQueue;
};//创建空的

void initSqQueue(SqQueue *sqQueue){
    std::cout << "---请输出数字，多个空格隔开，回车结束---" <<std::endl;
    char c;
    char data;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            cin>>data;
            EnQueue(sqQueue,data);
        }
    }
}
Status EnQueue(SqQueue *sqQueue,char data){
    if ((sqQueue->rear+1)%MAX_SIZE==sqQueue->front){
        return OVERFLOW;
    }
    sqQueue->data[sqQueue->rear]=data;
    sqQueue->rear=(sqQueue->rear+1)%MAX_SIZE;
    return OK;
}//入队;

Status DeQueue(SqQueue *sqQueue,char &data){
    if (isEmpty(sqQueue)){
        return ERROR;
    }
    data =sqQueue->data[sqQueue->front];
    sqQueue->front=(sqQueue->front+1)%MAX_SIZE;
    return OK;
}
bool isEmpty(SqQueue *sqQueue){
    return sqQueue->front==sqQueue->rear;
}