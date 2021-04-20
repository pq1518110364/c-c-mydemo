//
// Created by 向威 on 2021/4/20.
//

#include "LinkListDemo.h"

LinkList* createLinkList(bool b){
    LinkList *linkList= (LinkList*)malloc(sizeof (LNode));
    LNode *s,*r= reinterpret_cast<LNode *>(linkList); //r为尾指针
    if (b){
        s= (LNode*)malloc(sizeof (LNode));
        s->data=NULL;
        r->next=s;
        r=s;
    }
    char c;
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            s= (LNode*)malloc(sizeof (LNode));
            ungetc(c,stdin);
            cin>>s->data;
            r->next=s;
            r=s;
        }else{
            for(int i=1;i<11;++i){
                s= (LNode*)malloc(sizeof (LNode));
                s->data=i;
                r->next=s;
                r=s;
            }
        }
    }
    r->next=NULL;
    return linkList;
}

void queryAll(LinkList *linkList){
    LNode *list= reinterpret_cast<LNode *>(linkList);
    LNode *node= list->next;
    std::cout << "---遍历链表---" << std::endl;
    while (node){
        std::cout <<"--data:"<<node->data<< std::endl;
        node=node->next;
    }
}
//--反转 2.3.7(5)
void reverse_1(LinkList *linkList){
    LNode *p,*r;
    LNode *list= reinterpret_cast<LNode *>(linkList);
    p=list->next;
    list->next=NULL;
    while (p!=NULL){
        r=p->next;
        p->next=list->next;
        list->next=p;
        p=r;
    }
}//反转

