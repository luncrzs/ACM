#include <stdio.h>
int digit(int n);

int main(void)
{
	int a,i=0,j;
        int arr[100000];
	while(scanf("%d",&a)==1)
	{

            if(a==0)
                break;
            else
            {
                do{
                        a=digit(a);
                }while(a>=10);
            }
                arr[i++]=a;
	}
        for(j=0;j<i;j++)
        {
            printf("%d\n",arr[j]);
        }
	return 0;
}

int digit(int n)
{
	int i,dig=0;
	while(n>=1)
	{
		dig=dig+n%10;
		n=n/10;
	}
	return dig;
}
