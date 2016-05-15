/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:约瑟夫问题;
  *程序描述:古代某法官要处决n个犯人死刑，他有一条荒唐的罗辑，将犯人首尾相接排成圆圈，然后从第s个人开始数起，每数到第m个犯人，就拉出去处决，然后又数m个，数到的犯人又拉出去处决，以此类推，剩下的最后一人可以赦免;
  *创建日期;2015年 05月 26日 星期二 20:53:12 CST
  */
int main(int argc, char **argv)
{
	int n = 10, s = 7, m = 3, count = 0, idx;
	char person[10];
	memset(person, '1', sizeof(person)); // '1' show live '0'show die

	int i;
	for(i=0;i<10;i++)
		printf("%c ",person[i]);
	printf("\n");
//first time
    idx = (s-1-1+m); 
    person[idx] = '0';
    n--;
    
	while( n > 1 )
	{
		for(; ;)
		{
        	if(idx > 9)
            	idx %= 10;
			if(person[idx] == '1')
			{
                idx++;
                count++;
                if(count % 3 == 0)
                    break;
			}
			else
				idx++;
				
		}
		person[idx-1] = '0';
		n--;		
	}

	for(i=0;i<10;i++)
		printf("%c ",person[i]);
	exit(0);
}

  	
