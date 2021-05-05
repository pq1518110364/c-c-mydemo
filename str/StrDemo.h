//
// Created by 向威 on 2021/4/28.
//
#include "../universal/Universal.h"

#ifndef MYDEMO_STRDEMO_H
#define MYDEMO_STRDEMO_H

typedef struct {
    char *ch;
    int length;
}Str; //结构体声明

#define STR_MAX_SIZE 100

Str* createStr();
void initStr(Str* str);
Status strAssign(Str* str,char *ch);
int index(Str* s,Str* t);
int index_1(Str* s,Str* t);
void get_next(Str *t,int next[]);
int index_kmp(Str *s,Str *t,int next[]);
void get_nextVal(Str *t,int nextVal[]);
class StrDemo {

};


#endif //MYDEMO_STRDEMO_H
