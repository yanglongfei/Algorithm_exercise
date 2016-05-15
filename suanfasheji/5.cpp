/*************************************************************************
	> File Name: 5.cpp
	> Author:yanglongfei 
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月21日 星期一 19时10分54秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;
double getmedian(int *a,int *b,int n)
{
    int count=0;
    int i=0,j=0;
    double mid;
    while(count < n-1){
        if(a[i]<b[j]){
            i++;
            count++;
         }else{
            j++;
            count++;
         }
    }
    cout << i<<" "<<j<<endl;
     mid=(a[i]+b[j])/2.0;
    cout <<setiosflags(ios::fixed);
    cout.precision(2);
    cout << mid<<endl;
    return mid;
}
int main(int argc,char *argv[])
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    double c=getmedian(a,b,5);
    cout << "中位数是:"<<c<<endl;
    printf("%f\n",c);
   return 0;
}
