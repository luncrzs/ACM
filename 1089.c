#include <stdio.h>

int main(void)
{
	char dictionary[100][7]={""};
	char words[100][7]={""};
	int i,j,k,h,m,n,p;

	for(i=0;;i++)
	{
		gets(dictionary[i]);
		if(dictionary[i]=="XXXXXX")
		{
			i--;
			break;
		}
	}

	for(j=0;;j++)
	{
		gets(words[j]);
		if(words[j]=="XXXXXX")
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
			char ref[7]="";
			int judge=1;
			for(m=0;m<7;m++)
			{
				comp[m]=dictionary[h][m];
				ref[m]=1;
			}
			ref[--m]=0;

			for(m=0;words[k][m]!=0;m++)
			{
				for(n=0;dictionary[h][n]!=0;m++)
				{
					if(dictionary[h][n]==words[k][m])
					{
						if(comp[n]!=2)
							comp[n]=2;
						else
							continue;
					}
				}
			}
			for(p=0;comp[p]!=0;p++)
			{
				if(comp[p]==1)
					judge=0;
			}
			if(judge==1)
			{
				printf("%s",dictionary[h]);
				isAWord=1;
			}
		}
		if(isAWord==0)
			printf("NOT A VALID WORD");
		printf("******");
	}
}