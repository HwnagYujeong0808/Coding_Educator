	#include <stdio.h>
	int number=0;
	int ary[100][100];
	int num;
	void ShowString(int arr[100][100],int num)
	{
		printf("\n"); 
		for (int i=0; i<num+1; i++)
		{
			for (int j=0; j<num+1; j++)
			{
				printf("%2d ",arr[i][j]);
			}
			printf("\n");
		}
	}
	void I(int len,int pm,int is,int js);
	void J(int len, int pm,int is,int js);
	int main (void)
	{
		printf("ют╥б:");
		scanf("%d",&num);
		J(num,1,0,0);
		ShowString(ary,num);
	}
	
	void J(int len, int pm, int is, int js)
	{
		int j=js;
		int i=is;
		if (number==num*num)
			return;
		if (pm==1)
		{
			for (int isj=0; isj<len; isj++)
			{
				number++;
				ary[i][j]=number;
				printf("%d %d/ ",i,j);
				j++;
			}
			I(len-1,1,i,j);
		}
		else
		{
			for (int isj=0; isj<len; isj++)
			{
				number++;
				ary[i][j]=number;
				printf("%d %d/ ",i,j);
				j--;
			}
			I(len-1,0,i,j);
		}
	}
	
	void I(int len,int pm,int is,int js)
	{
		int j=js;
		int i=is;
		if (number==num*num)
			return;
		if (pm==1)
		{
			for (int isi=0; isi<len; isi++)
			{
				number++;
				ary[i][j]=number;
				printf("%d %d/ ",i,j);
				i++;
			}
			J(len,0,i,j);
		}
		else
		{
			for (int isi=0; isi<len; isi++)
			{
				number++;
				ary[i][j]=number;
				printf("%d %d/ ",i,j);
				i--;
			}
			J(len,1,i,j);
		}
	}
