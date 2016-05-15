/*************************************************************************
	> File Name: 2.cpp
	> Author:yanglongfei 
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月20日 星期日 23时39分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
int median(int *p,int n)
{
    if(n%2==0){
        return (p[n/2]+p[n/2-1])/2;   //当其元素个数为偶数时，找其下中位数和上中位数和的一半。
    }else{
        return p[n/2];
    }
}
double find_medin(int *a,int *b,int n)
{
    double m1,m2;
    if(n<=0){
        return -1;
    }
    if(n==1){
        return (a[0]+b[0])/2;   //这代表a和b数组中各有1个元素,所以，直接相加除以2；
    }
    if(n==2){
        return (max(a[0],b[0])+min(a[1],b[1]))/2;  //当a和b中各有2个元素时，找出合并后中间两个数再除于2
    }
    m1=median(a,n);   
    m2=median(b,n);
    if(m1==m2){   //相等就是中位数.
        return m1;
    }
    if(m1 < m2){
        if(n%2==0)
            return find_medin(a+n/2-1,b,n/2+1);   
        else
            return find_medin(a+n/2,b,n/2+1);
    }else{
        if(n%2==0)
            return find_medin(b+n/2-1,a,n/2+1);
        else
           return find_medin(b+n/2,a,n/2+1);
    }
}
int main(int argc,char *argv[])
{
    int a[]={1,12,10,26,38};
    int b[]={2,13,17,30,45};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    if(n1==n2){
        cout << "Medin is "<<find_medin(a,b,n1);
    }else{
        cout <<"array input errno"<<endl;
    }
   return 0;
}
