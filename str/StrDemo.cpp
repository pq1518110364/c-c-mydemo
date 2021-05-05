//
// Created by 向威 on 2021/4/28.
//
#include "StrDemo.h"
Str* createStr(){ //生成字符串
    Str* str= new Str();
    str->ch=NULL;
    str->length=0;
    return str;
};

void initStr(Str* str){
    cout<<"请输入一行字符串"<<endl;
    char *str1 = (char*)malloc(STR_MAX_SIZE*sizeof(char));
    cin.getline(str1,STR_MAX_SIZE);
    strAssign(str,str1);
    cout<<"ch[";
    for (int i = 0; i < str->length+1 ; ++i) {
        cout<<str->ch[i];
        if (i==str->length){
            cout<<"]"<<endl;
        }
    }
    cout<<endl;
};

//从1开始存储数据
Status strAssign(Str* str,char *ch){
    if (str->ch) free(str->ch);
    int len = 0;
    char *c=ch;
    while (*c){
        ++len;
        ++c;
    }
    if (len==0){
        str->length=0;
        str->ch=NULL;
    }else{
        c=ch;
        str->ch =(char*)malloc((len+1)*sizeof(char));
        for (int i = 1; i<=len+1 ; ++i,++c) {
            str->ch[i]=*c;
        }
        str->length=len;
    }
    return OK;
};
//暴力匹配 字符串从0开始存储数据
int index(Str* s,Str* t){
    int i =0,j=0;
    while (i<s->length && j<t->length){
        cout<<"s[i],t[j]"<<s->ch[i]<<", "<<t->ch[j]<<endl;
        if (s->ch[i]==t->ch[j]){
            ++i;
            ++j;
        }else{
            i=i-j+1;
            j=0;
        }
    }
    if (j>=t->length)
        return i-t->length;
    return -1;
};

//暴力匹配 字符串从1开始存储数据
int index_1(Str* s,Str* t){
    int i =1,j=1;
    while (i<=s->length && j<=t->length){
        cout<<"s[i],t[j]"<<s->ch[i]<<", "<<t->ch[j]<<endl;
        if (s->ch[i]==t->ch[j]){
            ++i;
            ++j;
        }else{
            i=i-j+2;
            j=1;
        }
    }
    if (j>t->length)
        return i-t->length;
    return 0;
};

void get_next(Str *t,int next[]){
    int i = 1,j=0;
    next[1]=0;
    while (i<t->length) {
        if (j == 0 || t->ch[i] == t->ch[j]) {
            ++i, ++j;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
    int x =1;
    cout<<"next[";
    while (x<=t->length){
        cout<<next[x];
        if (x==t->length){
            cout<<"]"<<endl;
        }
        x++;
    }
};

int index_kmp(Str *s,Str *t,int next[]){
    int i=1,j=1;
    while (i<=s->length && j<=t->length){
        if (j==0||s->ch[i]==t->ch[j]){
            ++i;
            ++j;
        }else{
            j=next[j];
        }
    }
    if (j>t->length)
        return i-t->length;
    return -1;
}

void get_nextVal(Str *t,int nextVal[]){
    int i = 1,j=0;
    nextVal[1]=0;
    while (i<t->length) {
        if (j == 0 || t->ch[i] == t->ch[j]) {
            ++i, ++j;
            if (t->ch[i]!=t->ch[j]){
                nextVal[i] = j;
            }else{
                nextVal[i]=nextVal[j];
            }
        } else {
            j = nextVal[j];
        }
    }
    int x =1;
    cout<<"next[";
    while (x<=t->length){
        cout<<nextVal[x];
        if (x==t->length){
            cout<<"]"<<endl;
        }
        x++;
    }
};


