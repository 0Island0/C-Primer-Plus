#include<stdio.h>
int main()
{
	int a, b, c;
	char ch;
	a = b = c = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			a++;
		if (ch == '\n')
			b++;
		else
			c++;
	}
	printf("%d���ո�%d�����з���%d�������ַ�", a, b, c);
	return 0;
}