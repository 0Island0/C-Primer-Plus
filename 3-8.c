#include<stdio.h>
int main()
{
	int a;
	double b, c, d, e;
	printf("请输入杯数：");
	scanf("%d", &a);
	b = a * 0.5;
	c = a * 8;
	d = c * 0.5;
	e = d / 3;
	printf("对应%f品脱，%f盎司，%f汤匙，%f茶匙", b, c, d, e);
	return 0;


}