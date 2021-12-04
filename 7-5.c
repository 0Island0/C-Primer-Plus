#include<stdio.h>
int main()
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			i++;
			break;
		case '!':
			ch = '!!';
			i++;
			break;
		default:
			ch = ch;
		}
	}
	printf("%d", i);
	return 0;
}