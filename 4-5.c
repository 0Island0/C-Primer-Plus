#include<stdio.h>
int main()
{
	float speed, big, time;
	printf("����������λÿ��(Mb/s)�������ٶȺ������ֽ�(MB)Ϊ��λ���ļ���С��");
	scanf("%f%f", &speed, &big);
	time = big*8 / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, big);
	printf("download  in %.2f seconds.", time);
	return 0;
}