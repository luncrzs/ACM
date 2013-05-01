#include <stdio.h>

int main(void)
{
	char dictionary[100][7]={""};
	char words[100][7]={""};
	int i,j,k,h,m,n,p;

	for(i=0;;i++)
	{
		gets(dictionary[i]);
		if(dictionary[i][1]==88)
		{
			i--;
			break;
		}
	}

	for(j=0;;j++)
	{
		gets(words[j]);
		if(words[j][1]==88)
		{
			j--;
			break;
		}
	}

	for(k=0;k<=j;k++)
	{
		int isAWord=0;
		for(h=0;h<=i;h++)
		{
			char comp[7]="";
			int judge=1;
			for(m=0;m<7;m++)
			{
				comp[m]=dictionary[h][m];
			}

			for(m=0;words[k][m]!=0;m++)
			{ 
				int found=0;
				for(n=0;comp[n]!=0;n++)
				{
					if(comp[n]==words[k][m])
					{
						comp[n]=1;
						found=1;
						break;
					}
				}
				if(found==0)
					judge=0;
			}
			if(judge==1)
			{
				for(p=0;comp[p]!=0;p++)
				{
					if(comp[p]!=1)
						judge=0;
				}
			}
			
			if(judge==1)
			{
				printf("%s\n",dictionary[h]);
				isAWord=1;
			}
		}
		if(isAWord==0)
			printf("NOT A VALID WORD\n");
		printf("******\n");
	}
}