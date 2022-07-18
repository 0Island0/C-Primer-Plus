#include<stdio.h>
int main()
{
	char ch,c;
	int a,i=0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case'e':a = 1; break;
			case'i':
				if (a == 1)
					i++;
			default:a = 0; 
		}
	}
	printf("%d",i);
	return 0;
}
