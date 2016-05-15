#include <stdio.h>
void  *swap(int *s1,int *s2)
{
	int n;
	if(*s1>*s2)
	{
	n=*s1;
	*s1=*s2;
	*s2=n;
	}
	
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b);
	swap(&a,&c);
	swap(&b,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
