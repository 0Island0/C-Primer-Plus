#include<stdio.h>
int main()
{
	float q, m1 = 950.0, m2 = 3.0e-23;
	double n;
	printf("请输入水的夸脱数：");
	scanf("%f", &q);
	n = q * m1 / m2;
	printf("水分子的数量为：%f", n);
	return 0;
}