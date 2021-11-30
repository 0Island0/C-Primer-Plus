#include<stdio.h>
int main()
{
	float a;
	printf("请输入一个浮点数：\n");
	scanf("%f", &a);
	printf("The input is %.1f or %.1e\n", a, a);
	printf("The input is %.3f or %.3e\n", a, a);
	return 0;
}