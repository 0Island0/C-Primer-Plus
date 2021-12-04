#include<stdio.h>
int main()
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			i++;
		}

		else if (ch == '!')
		{
			ch = '!!';
			i++;
		}
		else
			ch = ch;
	}
	
	printf("%d", i);
	return 0;
}