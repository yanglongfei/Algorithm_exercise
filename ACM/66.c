/*     Description:现在输入一个正整数k,找到所有的正整数x>=y,使得1/k=1/x+1/y.
 *     
 *    name:66.C
 * 
 *    Created on:2015年 07月 04日 星期六 13:58:08 CST
 *
 *    Author:yang
 */
 
#include <stdio.h>

int main()

{

    int k,x,y,n;
    scanf("%d",&n);
while(n--)
{
  
   scanf("%d",&k);

   for(x=(k+1);x<=2*k;x++)

   {

       y=(k*x)/(x-k);

       if((k*x)%(x-k)==0)

      {

       //  y=(k*x)/(x-k);

         printf("1/%d=1/%d+1/%d\n",k,y,x);

      }

  }

}
}
