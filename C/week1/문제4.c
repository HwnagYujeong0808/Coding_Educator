#include <stdio.h>
 
 void main(void){
 	int kor;
 	int math;
 	int eng;
 	printf("��������: "); scanf("%d", &kor);
 	printf("��������: "); scanf("%d", &math);
 	printf("��������: "); scanf("%d", &eng);

	int sum=kor+math +eng;
	float avg = sum/3.0;
	printf("���� : %d\n",sum);	
	printf("��� : %.2f",avg);	
 	return 0; 
 }
