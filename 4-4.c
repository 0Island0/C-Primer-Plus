#include<stdio.h>
int main()
{
	float high;
	char name[40];
	printf("请输入身高(厘米)和姓名:");
	scanf("%f%s", &high, name);
	high = high / 100;
	printf("%s,you are %f meters tall.", name, high);
	return 0;
}