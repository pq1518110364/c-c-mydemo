//
// Created by 向威 on 2021/4/20.
//

#ifndef MYDEMO_LINKLISTDEMO_H
#define MYDEMO_LINKLISTDEMO_H
#include "../../universal/Universal.h"

typedef int DataType;
//---线性表存储结够
typedef struct LNode{
    DataType data;
    struct LNode *next;
}LNode, *LinkList;

LinkList* createLinkList(bool b);//创建,是否创建头节点；
void initLinkList(LinkList* linkList);
void queryAll(LinkList *linkList);//遍历
void reverse_1(LinkList *linkList);//反转 2.3.7(5)
void reverse_2(LinkList *linkList);//   反转 2.3.7(5)
void sort(LinkList *linkList);//反转 2.3.7(6)
void disCreate(LinkList *linkList);//2.3.7(10)
void creatList_L();
class LinkListDemo {

};


#endif //MYDEMO_LINKLISTDEMO_H
