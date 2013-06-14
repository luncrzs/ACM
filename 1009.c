#include <stdio.h>

int main(void)
{
	int n_rows,n_columns;
	int matrix[100][100];
	int mice[2];
	int fat[2];
	int i,j;

	scanf("%d %d",&n_rows,&n_columns);

	for(i=0;i<n_rows;i++)
	{
		for(j=0;j<n_columns;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<n_rows;i++)
	{
		for(j=0;j<n_columns;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
}