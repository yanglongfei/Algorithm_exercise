/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月11日 星期五 15时01分16秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i=0,j=0;
    for(i=2;;i++){
        if(i%2==0 || i%3==0){
            j++;
        }
        if(j==2333){

            break;
        }
    }
    std::cout << i;
    
    return 0;
}
