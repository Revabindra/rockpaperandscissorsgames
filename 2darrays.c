#include<stdio.h>
int main()
{
	int n[3][3],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n enter a number");
			scanf("%d",&n[r][c]);
		}
	}
		printf("\n    the given matrix");
		for(r=0;r<3;r++)
		{
			printf("\n");
			for(c=0;c<3;c++)
			{
				printf(" \t %d",n[r][c]);
	     	}
		}
	
	
}
