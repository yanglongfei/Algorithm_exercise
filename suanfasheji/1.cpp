/*************************************************************************
	> File Name: 1.cpp
	> Author:yanglongfei 
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月16日 星期三 08时06分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<random>
#include<sys/timeb.h>
#include<ctime>
#define N 200000
using namespace std;
int fenzu(int (&a)[N],int (&b)[N])
{
    int temp=a[0];
    int j=0;
    int i;
    b[j++]=0;
    for(i=1;i<N;i++){
        if(temp <= a[i]){
            temp=a[i];
        }else{
            b[j++]=i;
            temp=a[i];
        }
    }
    b[j++]=N;
    return j;
}
void merge(int (&a)[N],int left,int mid,int right)
{
    int i=left,j=mid+1,k=left;
    int d[N];
    while(i<=mid && j<=right){
        if(a[i] < a[j]){
            d[k++]=a[i++];
        }else{
            d[k++]=a[j++];
        }
    }
    if(i!=mid+1){
        for(int t=i;t<=mid;t++){
            d[k++]=a[t];
        }
    }
    if(j!=right+1){
        for(int t=j;t<=right;t++){
            d[k++]=a[t];
        }
    }
        for(int i=left;i<=right;i++){
            a[i]=d[i];
        }
    //for(int i=0;i<N;i++){
      //  cout << a[i]<<" ";
    //}
    //cout <<endl;
}
void mergeSort(int (&a)[N],int (&b)[N])
{
    int length=fenzu(a,b),i=0;
    //cout << "length:"<<length<< endl;
    while(length!=2){
        for(int i=0;i<length-2;i+=2){
            merge(a,b[i],b[i+1]-1,b[i+2]-1);
        }
        length=fenzu(a,b);
    }
}
int main(int argc,char *argv[])
{
    struct timeb startTime,endTime;
    ftime(&startTime);
    int a[N];
    uniform_int_distribution<unsigned> u(0,300000);
    default_random_engine e;
    for(size_t i=0;i<N;i++){
        a[i]=u(e);
    }
    int b[N];
    mergeSort(a,b);
   /* for(int i=0;i<N;i++){
        cout<<a[i]<< " ";
    }
    cout << endl;*/
    ftime(&endTime);
    cout <<(endTime.time-startTime.time)*1000+(endTime.millitm-startTime.millitm)<<"毫秒"<<endl;
    return 0;
}
