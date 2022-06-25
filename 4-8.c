#include<stdio.h>
#define M1 3.785
#define M2 1.609
int main()
{
	float miles, oil;
	float meters, litres;
	printf("请输入旅行的里程（英里）和消耗的汽油量（加仑）：");
	scanf("%f%f", &miles, &oil);
	litres = oil * M1;
	meters = miles * M2;
	printf("%.1f英里/加仑=%.1f升/100公里", miles / oil, litres / meters / 100);
	return 0;
}
