#include<stdio.h>
int main()
{
	float q, m1 = 950.0, m2 = 3.0e-23;
	double n;
	printf("������ˮ�Ŀ�������");
	scanf("%f", &q);
	n = q * m1 / m2;
	printf("ˮ���ӵ�����Ϊ��%f", n);
	return 0;
}