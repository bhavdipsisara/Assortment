#include<stdio.h>
int square(int row, int col)
{
	int i,j;
	int a[row][col];
	int *arr2[row][col];
	printf("\nenter the elements of the matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("[%d][%d] ; ",i,j);
			scanf("%d",&a[i][j]);
			arr2[i][j] = &a[i][j];
		}
	}
	printf("\nmatrix : \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
	   {
		printf("%d",*arr2[i][j]);
		
	   }  
	printf("\n");
		
	}
	
	printf("\nsquare of matrix is : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",(*arr2[i][j]) * (*arr2[i][j]));
		}
		printf("\n");
	}
}
main()
{
	int r,c;
	
	printf("enter the number of rows : ");
	scanf("%d",&r);
	
	printf("enter the number of columns : ");
	scanf("%d",&c);
	
	square(r,c);
}






 
