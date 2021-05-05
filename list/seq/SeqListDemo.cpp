//
// Created by 向威 on 2021/4/19.
//

#include "./SeqListDemo.h"
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

 一、分功能模块设计，包含.h文件：

1、首先分模块设计，一个功能模块对应一个 func.cpp文件和 func.h文件；

2、变量、函数定义放在func.cpp，声明放在func.h中；

*******************************************************************************/

// ----初始化线性表
// Status initSeqList(SeqList &L){
//     L.length=0;
//     L.lisesize=0;
//     return OK;
// }
SeqList* createSeqList(){
    SeqList *seq = new SeqList();
    seq->length=0;
    seq->lisesize=LIST_INIT_SIZE;
    return seq;
};

void initSeqList(SeqList *seq){
    std::cout << "---请输出数字，多个空格隔开，回车结束---" <<std::endl;
    int i = 0;
    char c;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            cin>>seq->elem[i++];
            seq->length++;
        }else{
            for (int j = 0; j < 10; j++) {
                seq->elem[j]=j;
                seq->length++;
            }
            break;
        }
    }
// 	for(int j=0;j<i;j++)
// 	{
// 		cout<<"a["<<j<<"]:"<<seq->elem[j]<<endl;
// 	}
}
//插入元素
Status insertSeqList(SeqList *L,int i,int e){
    //i的合法性
    //if(i<1||i>L.length+1) return ERROR;
    if(i<1||i>L->length+1){
        i=L->length-1;
    }
    //当前存储量
    if(L->length >= L->lisesize){
        int *newbase =(int *)realloc(L->elem,(L->lisesize+LINST_INCREAMENT)*sizeof(int));
        if(newbase){
            return OVERFLOW;
        }
        //L->elem =newbase;
        L->lisesize+=LINST_INCREAMENT;
    }
    //q插入位置
    int *q = &(L->elem[i-1]);
    if(L->length>0){
        for (int *p = &(L->elem[L->length-1]); p >= q; --p) {
            *(p+1)=*p;
        }
    }
    L->elem[i-1]=e;
    L->length++;
    return OK;
}
//--遍历数组---
void querySqlALL(SeqList *seq){
    std::cout << "---遍历顺序表---" << std::endl;
//     for (int value : seq->elem)
// 	{
// 		std::cout <<"value:"<<value << std::endl;
// 	}
    std::cout <<"--length:"<<seq->length<< std::endl;
    for (int i = 0; i <= seq->length-1; i++) {
        std::cout <<"elem["<<i<<"]:"<<seq->elem[i]<< std::endl;
    }
}
void destorySqlList(SeqList *seq){
    std::cout << "---销毁顺序表---" << std::endl;
    free(seq);
}

void test_2_2_3_8_Reverse(int arrayList[],int left,int right,int size){
    if(left>=right||right>=size)return;
    int mid=(left+right)/2;
    for (int i = 0; i <= mid-left; i++) {
        DataType temp=arrayList[left+i];
        arrayList[left+i]=arrayList[right-i];
        arrayList[right-i]=temp;
    }
}
// --- 习题2.2.3.8
 void test_2_2_3_8(){
    SeqList *seq = createSeqList();
     initSeqList(seq);
    test_2_2_3_8_Reverse(seq->elem,0,9,10);
    querySqlALL(seq);
    test_2_2_3_8_Reverse(seq->elem,0,4,10);
    querySqlALL(seq);
    test_2_2_3_8_Reverse(seq->elem,5,9,10);
    querySqlALL(seq);
    destorySqlList(seq);
}
int half_search(int arrayList[],int n,DataType i){
    int low=0,high=n-1,mid;
    while (low<=high){
        mid=(low+high)/2;
        if (arrayList[mid]==i){
            return mid;
        } else if (arrayList[mid]<i){
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
    return ERROR;
}

//---- 折半查找
void test_2_2_3_9(){
    SeqList *seq = createSeqList();
    initSeqList(seq);
    querySqlALL(seq);
    int n;
    cin>>n;
    int result= half_search(seq->elem,seq->length,n);
    std::cout <<"--result:"<<result<< std::endl;
}


