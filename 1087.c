#include <stdio.h>
int main(void)
{
	char result[1000001]={0};
	int i,d,temp;

	for(i=1;i<1000000;i++)
	{
		temp=d=i;
		do{
			d=d+temp%10;
			temp=temp/10;
		}while(temp>=1);
		if(d<=1000000)
			result[d]=1;
	}

	for(i=1;i<=1000000;i++)
	{
		if(result[i]==0)
			printf("%d\n",i);
	}
	return 0;
}