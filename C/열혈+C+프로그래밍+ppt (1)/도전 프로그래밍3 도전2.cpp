	#include <stdio.h>
	int main (void)
	{
		int num;
		int arr[100][100];
		int is=1;
		printf("ют╥б:");
		scanf("%d",&num);
		for (int i=1; i<=num; i++)
		{
			if (i%2==1)
				for (int is1=0; is1<num; is1++)
				{
					arr[i-1][is1]=is;
					is++;
				}
			else
				for (int is2=num-1; is2>=0; is2--)
				{
					arr[i-1][is2]=is;
					is++;
				}
		}
		for (int is3=0; is3<num; is3++)
		{
			for (int j=0; j<num; j++)
			{
				printf("%d ",arr[is3][j]);
			}
			printf("\n");
		}
		return 0; 
	}
