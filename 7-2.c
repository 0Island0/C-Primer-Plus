#include<stdio.h>
int main()
{
	char ch;
	int i=0;
	while ((ch = getchar()) != '#')
	{
		i++;
		printf("%c-%d ", ch,ch);
		if (i % 8 == 0)
			printf("\n");
	}
	return 0;
}