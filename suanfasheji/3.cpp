/*************************************************************************
	> File Name: 3.cpp
	> Author:yanglongfei 
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月16日 星期三 23时43分46秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<random>
#include<sys/timeb.h>
#include<ctime>
#define N 200000
using namespace std;
int  merge(int a[],int low,int mid,int high){
    int i=low,j=mid+1,p=0;
    int *temp=(int *)malloc(sizeof(int));
    if(temp == NULL){
        return -1;
    }
    while(i<=mid && j<=high){
        temp[p++]=((a[i]<=a[j])?a[i++]:a[j++]);   
    }
    while(i<=mid){
        temp[p++]=a[i++];
    }
    while(j<=high){
        temp[p++]=a[j++];
    }
    for(p=0,i=low;i<=high;i++,p++){
        a[i]=temp[p];
    }
    free(temp);
    
}
void mergeSort(int a[],int low,int high)
{
    int mid=(low + high)/2;
    if(low < high)
    {
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(int argc,char *argv[])
{
    int a[N];
    uniform_int_distribution<unsigned> u(0,300000);
    default_random_engine e;
    for(size_t i=0;i<N;i++){
        a[i]=u(e);
    }
    mergeSort(a,0,N-1);
   return 0;
}
