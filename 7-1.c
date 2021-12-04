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
	printf("%d个空格，%d个换行符，%d个其它字符", a, b, c);
	return 0;
}