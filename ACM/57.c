#include <stdio.h>
union  int_char
{
	char ch;
	int i;
};
int main()
{
	int n,k,i;
	union int_char x;
//	scanf("%d"&n);
//	for(i=0;i<n;i++)
//	{
	    scanf("%d",&x.i);
	 for(i=0;i<4;i++)
		printf("%2d",x.ch);
}

		
