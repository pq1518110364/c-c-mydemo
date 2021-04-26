//
// Created by 向威 on 2021/4/22.
//

#include "SqStackDemo.h"
SqStack* initSqStack(){
    SqStack *stack = (SqStack *)malloc(sizeof (SqStack));
    if (!stack){
        exit(OVERFLOW);
    }
    SElemType * base=(SElemType *)malloc(STACK_INIT_SIZE*sizeof (SElemType));
    if (!base){
        exit(OVERFLOW);
    }
    stack->base=base;
    stack->top=stack->base;
    stack->stackSize=STACK_INIT_SIZE;
    return stack;
};//初始化栈

Status getTop(SqStack *sqStack,SElemType &elemType){
    if (sqStack->top==sqStack->base) return ERROR;
    elemType=*(sqStack->top-1);
};//返回栈顶元素

Status push(SqStack *sqStack,SElemType elemType){
    //栈满追加
    if (sqStack->top-sqStack->base>=sqStack->stackSize){
        sqStack->base=(SElemType *)realloc(sqStack->base,(sqStack->stackSize+STACKINCREATE)*sizeof (SElemType));
        if(!sqStack->base)        exit(OVERFLOW);
        sqStack->top=sqStack->base+sqStack->stackSize;
        sqStack->stackSize+=STACKINCREATE;
    }
    *sqStack->top++ =elemType;
    return OK;
};//插入元素

Status push(SqStack *sqStack) {
    SElemType elemType;
    std::cout << "---请输出---" <<std::endl;
    char c;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            cin>>elemType;
            push(sqStack,elemType);
            elemType=NULL;
        }else{
            for (int j = 0; j < 10; j++) {
                push(sqStack,j);
            }
            break;
        }
    }
    return OK;
};//多个

Status pop(SqStack *sqStack,SElemType &elemType) {
    if (sqStack->top==sqStack->base){
        return ERROR;
    }
    elemType=* --sqStack->top;
    return OK;
};//删除元素
double Fib(int n){
    struct stack{
        int no;//保存n
        double val;//保存数值
    }st[10];
    int top = -1;
    double fv1=0,fv2=1;
    for (int j = n; j >2 ; j--) {
        st[++top].no=j;
    }
    while (top>-1){
        st[top].val=fv1+fv2;
        fv1=fv2;
        fv2=st[top].val;
        top--;
    }
    return fv2;
};//斐波拉切



