#include <stdio.h> 
int main(void) 
{ 
//ctrl + E : ���� ���� 
//ctrl + D : �� �� ���� 
// �� ���� A,B,C �� �Է��� �� ��°�� ū ������ ����Ͻÿ�
// if - else �� �̿��ϱ� 
	int a, b, c, mid;
	scanf("%d %d %d",&a, &b, &c);  
	
	if((a>b && a<c)||(a<b && a>c)) // a�� �� ��°�� ū ���� 
		mid = a;
	else if ((a<b && b<=c)||(a>=b && b>c))
		mid = b;
	else
		mid = c;
		
	printf("%d\n",mid);
	return 0; 
}


