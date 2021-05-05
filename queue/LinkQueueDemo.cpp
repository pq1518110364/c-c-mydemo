//
// Created by 向威 on 2021/5/4.
//

#include "LinkQueueDemo.h"
LinkQueue *creatLinkQueue(){
    auto *linkQueue=(LinkQueue *)malloc(sizeof (LinkQueue));
    if (!linkQueue){
        exit(OVERFLOW);
    }
    linkQueue->front=linkQueue->rear=(QNode *)malloc(sizeof (QNode));
    linkQueue->front->next=nullptr;
    return linkQueue;
};//创建空的


void initLinkQueue(LinkQueue *linkQueue){
    std::cout << "---请输出数字，多个空格隔开，回车结束---" <<std::endl;
    char c;
    char data;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            cin>>data;
            enQueue(linkQueue,data);
        }
    }
};//初始化
//判断是否为空
bool isEmpty(LinkQueue *linkQueue){
    return linkQueue->front==linkQueue->rear;
}
void enQueue(LinkQueue *linkQueue,char data){
    auto *qNode=(QNode *)malloc(sizeof (QNode));
    if (!qNode){
        exit(OVERFLOW);
    }
    qNode->data=data;
    qNode->next=nullptr;
    linkQueue->rear->next=qNode;
    linkQueue->rear=qNode;
}

bool deQueue(LinkQueue *linkQueue,char &data){
    if (isEmpty(linkQueue)){
        return false;
    }
    auto *qNode= linkQueue->front->next;
    data=qNode->data;
    linkQueue->front->next=qNode->next;
    if (linkQueue->rear==qNode){
        linkQueue->rear=linkQueue->front;
    }
    free(qNode);
    return true;
}
