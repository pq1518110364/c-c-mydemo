//
// Created by 向威 on 2021/4/19.
// 顺序表
//

#ifndef MYDEMO_SEQLISTDEMO_H
#define MYDEMO_SEQLISTDEMO_H

//------线性表动态分类存储顺序
#define LIST_INIT_SIZE 100
#define LINST_INCREAMENT 10
#include "../../universal/Universal.h"


typedef struct{
    int elem[LIST_INIT_SIZE]; //存储基址
    int length; //当前长度
    int lisesize;//当前分配容量
}SeqList;
typedef int DataType;
SeqList* createSeqList();
void initSeqList(SeqList* seqList);
Status insertSeqList(SeqList *L,int i,int e);
void querySqlALL(SeqList *seq);
Status insertSeqList(SeqList *L,int i,int e);
void querySqlALL(SeqList *seq);
void destorySqlList(SeqList *seq);
void test_2_2_3_8_Reverse(int arrayList[],int right,int left,int size);
void test_2_2_3_8();// --习题2.2.3(8)
void test_2_2_3_9();// --习题2.2.3(9)
int half_search(int arrayList[],int length,DataType i);//折半查找

class SeqListDemo {

};


#endif //MYDEMO_SEQLISTDEMO_H
