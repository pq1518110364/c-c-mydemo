//
// Created by 向威 on 2021/5/16.
//

#include "SortDemo.h"
//直接插入排序
//    int A[]={1,49,38,65,97,76,13,27,55,4};
void insertSort(int A[],int n){
    int i,j,temp;
    for (i = 1; i <n; ++i) {
        if (A[i]<A[i-1]){
            temp=A[i];
            // cout<<temp<<endl;
            for (j = i-1;  temp<A[j] ; j--) {
                A[j+1]=A[j];
            }
            A[j+1]=temp;
        }
    }
};

//折半插入排序
//    int A[]={1,49,38,65,97,76,13,27,55,4};
void insertSort2(int A[],int n){
    int i,j,temp,low,high,mid;
    for (i = 1; i <n; ++i) {
        temp=A[i];
        low=0,high=i-1;
        //cout<<temp<<endl;
        while (low<=high){
            mid=(high+low)/2;
            if (A[mid]>temp){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        for (j = i-1; j>=high+1 ; j--) {
            A[j+1]=A[j];
        }
        A[high+1]=temp;

    }
};
//希尔排序
void shellSort(int A[],int n){
    int temp;
    for (int gap = n/2; gap>0; gap/=2) {
        for (int i = gap; i < n; ++i) {
            temp=A[i];
            int j;
            for (j = i; j>=gap&&A[j-gap]>temp; j-=gap) {
                A[j]=A[j-gap];
            }
            A[j]=temp;
        }
    }
};
