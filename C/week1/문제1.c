#include <stdio.h> 
int main(void) 
{ 
//ctrl + E : 한줄 복사 
//ctrl + D : 한 줄 삭제 
// 세 정수 A,B,C 를 입력해 두 번째로 큰 정수를 출력하시오
// if - else 문 이용하기 
	int a, b, c, mid;
	scanf("%d %d %d",&a, &b, &c);  
	
	if((a>b && a<c)||(a<b && a>c)) // a가 두 번째로 큰 정수 
		mid = a;
	else if ((a<b && b<=c)||(a>=b && b>c))
		mid = b;
	else
		mid = c;
		
	printf("%d\n",mid);
	return 0; 
}


