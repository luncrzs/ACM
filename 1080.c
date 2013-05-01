#include <stdio.h>
int digit(char num[100]);

int main(void)
{
	int a;
    char num[100];
	while(gets(num))
	{

        if(num[0]==48)
            return 0;
        else
        {
            a=digit(num);
            printf("%d\n",a);
        }
	}
	return 0;
}

int digit(char num[100])
{
	int i,dig=0,n=0;
    for(i=0;num[i]!=0;i++)
    {
        n=n+num[i]-48;
    }
    do{
        dig=0;
        while(n>=1)
        {
            dig=dig+n%10;
            n=n/10;
        }
        n=dig;
    }while(dig>=10)
    	
	return dig;
}
