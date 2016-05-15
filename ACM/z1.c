/*Copyright(c):杨龙飞;
 *All right reserved;
 *程序名:寻找最长字符串;
 *文件描述:在字符串里找出连续最长的字符串，把这个串的长度返回，并把这个最长数字赋给其中一个函数outputstr所指的内存;
 *创建日期:2015年 05月 26日 星期二 16:33:59 CST
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int findnumstring(char *outputstr, char *inputstr)
{
	/*temp用于指向正在搜索中的字符串,*final用于指向最终最长的字符串*/
	char *in=inputstr, *out=outputstr, *temp,*final;
	int count=0,maxlen=0,i=0;
	while(*in!='\0')
	{
		//如果in所指的字符串的第一个字符为数字
		//就获取以此数字字符开始的数字串的长度
		//如果不是数字，in指向输入串的下一个字符
		if(*in>47&&*in<58)
		{
			//in指针在变化;
		    for(temp=in;*in>47&&*in<58;in++)
		       count++;
	        }
		else
		{
		    in++;
		}
	   if(maxlen<count)
	    {
		maxlen=count;
		final=temp;
	     }
          //把count清零;
		count=0;

	}
	//while循环结束后，最长的字符串已经找到
	//则把当前的最长数字字符串的长度和地址分别赋给maxlen和final
	for(i=0;i<maxlen;i++)
	 { *out=*final;
	   out++;
	   final++;
	 }
         *out='\0';
	return maxlen;
}
void main()
{
	//测试
	char string[]={"123mtygghy789799fff123456789"};
	char *p=(char *)malloc(strlen(string)+1);
	int count=findnumstring(p,string);
	printf("%s\nnumber string length = %d\n",p,count);
}

