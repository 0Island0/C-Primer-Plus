#include<stdio.h>
#define M1 3.785
#define M2 1.609
int main()
{
	float miles, oil;
	float meters, letters;
	printf("���������е���̣�Ӣ������ĵ������������أ���");
	scanf("%f%f", &miles, &oil);
	letters = oil * M1;
	meters = miles * M2;
	printf("%.1fӢ��/����=%.1f��/100����", miles / oil, letters / meters / 100);
	return 0;
}