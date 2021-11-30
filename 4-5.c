#include<stdio.h>
int main()
{
	float speed, big, time;
	printf("请输入以兆位每秒(Mb/s)的下载速度和以兆字节(MB)为单位的文件大小：");
	scanf("%f%f", &speed, &big);
	time = big*8 / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, big);
	printf("download  in %.2f seconds.", time);
	return 0;
}