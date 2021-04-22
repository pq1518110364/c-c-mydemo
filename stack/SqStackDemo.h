//
// Created by 向威 on 2021/4/22.
//
#include "../universal/Universal.h"
#ifndef MYDEMO_SQSTACKDEMO_H
#define MYDEMO_SQSTACKDEMO_H
#define STACK_INIT_SIZE 100 //初始量
#define STACKINCREATE 10    //增加量
typedef int SElemType;
typedef struct {
    SElemType *base; //构造之前和摧毁之后都为NULL
    SElemType *top; //栈顶指针
    int stackSize;  //当前已分配的存储空间
}SqStack;

SqStack* initSqStack();//初始化栈
Status getTop(SqStack *sqStack,SElemType &elemType);//返回栈顶元素
Status push(SqStack *sqStack,SElemType elemType);//插入元素
Status pop(SqStack *sqStack,SElemType &elemType);
Status push(SqStack *sqStack);//多个
class SqStackDemo {

};


#endif //MYDEMO_SQSTACKDEMO_H
