#include<stdio.h>
int main()
{
	int h;
	double high;
	printf("请输入身高(/英寸):");
	scanf("%d", &h);
	high = h * 2.54;
	printf("您的身高(/厘米)：%f", high);
	return 0;
}