#include<stdio.h>
int main()
{
	int years;
	float seconds;
	printf("请输入年龄：");
	scanf("%d", &years);
	seconds = years * 3.156e7;
	printf("该年龄对应的秒数为：%e秒",seconds);
	return 0;
}