#include <iostream>
#include "list/seq/SeqListDemo.h"
#include "list/link/LinkListDemo.h"
#include "stack/SqStackDemo.h"
#include "stack/LinkStackDemo.h"
#include "str/StrDemo.h"
#include "queue/SqQueueDemo.h"
#include "queue/LinkQueueDemo.h"
#include "tree/BiTreeDemo.h"
#include "sort/SortDemo.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
//    test_2_2_3_8();
//    test_2_2_3_9();
//    LinkList *linkList = createLinkList(true);
//    initLinkList(linkList);
//    queryAll(linkList);
//    reverse_1(linkList);
//    queryAll(linkList);
//    reverse_2(linkList);
//    queryAll(linkList);
//    sort(linkList);
//    queryAll(linkList);
//    disCreate(linkList);
//    SqStack* sqStack1= createSqStack();
//    initSqStack(sqStack1);//初始化栈
//    Status status = push(sqStack1);//插入元素
//    std::cout << "---status---" <<status<<std::endl;
//    SElemType sElemType;
//    Status status1 = pop(sqStack1, sElemType);
//    std::cout << "---status1---" <<status1<<std::endl;
//    std::cout << "---sElemType---" <<sElemType<<std::endl;
//    struct LinkStack mStack = {NULL, 0}; // 初始化一个栈
//    printf("pushed + %d! size = %d\n", push(10, &mStack), mStack.size); // 给栈压入新的元素10
//    printf("pushed + %d! size = %d\n\n", push(3,&mStack), mStack.size); // 给栈压入新的元素3
//    printf("top = %d\n", top(mStack)); // 输出此时栈顶的元素
//    pop(&mStack); // 移除栈顶的元素
//    printf("poped! size = %d\n", mStack.size); // 输出元素个数
//    printf("top = %d\n", top(mStack)); // 输出此时栈顶的元素
//    pop(&mStack); // 移除栈顶的元素
//    printf("poped! size = %d\n", mStack.size); // 输出元素个数
//    printf("isEmpty = %d\n", empty(mStack));
//    cout<<"斐波拉切"<<Fib(8)<<endl;
//    Str* str1 = createStr();
//    initStr(str1);
//    Str* str2 = createStr();
//    initStr(str2);
//    cout<<index_1(str1,str2);
//    Str* str3 = createStr();
//    initStr(str3);
//    int next[str3->length];
//    get_next(str3,next);
//    int nextVal[str3->length];
//    get_nextVal(str3,nextVal);
//    Str* str4 = createStr();
//    initStr(str4);
//    cout<<index_kmp(str4,str3,next);
//    cout<<index_kmp(str4,str3,nextVal);
//    SqQueue *sqQueue = creatSqQueue();
//     initSqQueue(sqQueue);
//    char data;
//    while (DeQueue(sqQueue,data)){
//        std::cout <<"data:"<<data<<std::endl;
//    }
//    LinkQueue  *linkQueue=creatLinkQueue();
//    initLinkQueue(linkQueue);
//    while (deQueue(linkQueue,data)){
//        std::cout <<"data:"<<data<<std::endl;
//    }
//    BiTNode *biTNode=createBTree();
//    biTNode = initBTree(biTNode);
//    cout<<"前序遍历";
//    preOrder(biTNode);
//    cout<<endl;
//    cout<<"非递归前序遍历";
//    preOrder2(biTNode);
//    cout<<endl;
//    cout<<"中序遍历";
//    inOrder(biTNode);
//    cout<<endl;
//    cout<<"非递归中序遍历";
//    inOrder2(biTNode);
//    cout<<endl;
//    cout<<"后序遍历";
//    postOrder(biTNode);
//    cout<<endl;
//    cout<<"层序遍历";
//    levelOrder(biTNode);
//    cout<<endl;
//    cout<<"树的高度"<<btDepth(biTNode)<<endl;
//    cout<<"树的高度"<<btDepth2(biTNode)<<endl;
//    findXAncestor(biTNode, 'f');
    //ThreadNode *threadNode=createThreadNode();
    //threadNode = initThreadNode(threadNode);
    //inThread(threadNode,nullptr);//中序建立索引二叉树
    //preThread(threadNode,nullptr);//前序索引树
    //postThread(threadNode,nullptr);//前序索引树
    //ancestor(threadNode,p,q);//查找公共祖先
//    char pre[]={'a','b','d','e','c','f','g','h'};
//    char in[]={'d','b','e','a','c','g','f','h'};
//    char level[]={'a','b','c','d','e','f','g','h'};
//    char in[]={'d','b','e','a','c','g','f','h'};
//    BiTNode * biTNode= createBt3(level,in,7,0,7);//todo存在问题
//    cout<<"层序遍历";
//    levelOrder(biTNode);
//    cout<<endl;
    //直接插入排序
    int A[]={1,49,38,65,97,76,13,27,55,4};
    //insertSort(A,10);
    //insertSort2(A,10);
    shellSort(A,10);
    cout<<"A[";
    for (int i = 0; i < 10; ++i) {
        if (i==9){
            cout<<A[i]<<"]"<<endl;
        }else{
            cout<<A[i]<<",";
        }
    }

    return 0;
}


