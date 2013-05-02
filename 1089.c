#include <stdio.h>
int trim(char* candidate[100],char dictionary[100][7]);

int main(void)
{
	char dictionary[100][7]={""};
	char words[100][7]={""};
	int i,j,k,h,m,n,p,c;

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
		int isAWord=0,c=0;
		char* candidate[100]={NULL};
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
				candidate[c++]=dictionary[h];
				isAWord=1;
			}
		}
		if(isAWord==0)
			printf("NOT A VALID WORD\n");
		else
		{
			trim(candidate,dictionary);
			for(m=0;m<c;m++)
			{
				printf("%s\n",candidate[m]);
			}
		}
		printf("******\n");
	}
	return 0;
}

int trim(char* candidate[100],char dictionary[100][7])
{
	char* temp;
	int i,j,k;
	
	for(i=0;candidate[i]!=NULL;i++)
	{
		for(j=i+1;candidate[j]!=NULL;j++)
		{
			for(k=0;k<7;k++)
			{
				if(candidate[j][k]==candidate[i][k])
					continue;
				else if(candidate[j][k]<candidate[i][k])
				{
					temp=candidate[i];
					candidate[i]=candidate[j];
					candidate[j]=temp;
					break;
				}
				else
					break;
			}
		}
	}

	return 0;
}