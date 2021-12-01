#include<stdio.h>
int main()
{
	char f[26];
	char ch;
	int i;
	for (ch = 'a', i = 0; ch <= 'z'; i++, ch++)
	{
		f[i] = ch;
		printf("%c", f[i]);
	}
	printf("\n");
	printf("%c", f[26]);
	return 0;
}