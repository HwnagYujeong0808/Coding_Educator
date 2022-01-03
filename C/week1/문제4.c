#include <stdio.h>
 
 void main(void){
 	int kor;
 	int math;
 	int eng;
 	printf("국어점수: "); scanf("%d", &kor);
 	printf("수학점수: "); scanf("%d", &math);
 	printf("영어점수: "); scanf("%d", &eng);

	int sum=kor+math +eng;
	float avg = sum/3.0;
	printf("총점 : %d\n",sum);	
	printf("평균 : %.2f",avg);	
 	return 0; 
 }
