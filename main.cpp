#include <iostream>
#include "list/seq/SeqListDemo.h"
#include "list/link/LinkListDemo.h"
#include "stack/SqStackDemo.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    //test_2_2_3_8();
    //test_2_2_3_9();
//    LinkList *linkList = createLinkList(true);
//    queryAll(linkList);
//    reverse_1(linkList);
    //queryAll(linkList);
   // reverse_2(linkList);
//    queryAll(linkList);
//    sort(linkList);
//    queryAll(linkList);
//    disCreate(linkList);
    SqStack* sqStack1=initSqStack();//初始化栈
    Status status = push(sqStack1);//插入元素
    std::cout << "---status---" <<status<<std::endl;
    SElemType sElemType;
    Status status1 = pop(sqStack1, sElemType);
    std::cout << "---status1---" <<status1<<std::endl;
    std::cout << "---sElemType---" <<sElemType<<std::endl;

    return 0;
}


