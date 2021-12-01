#include<stdio.h>
#include<string.h>
int main()
{
	char word[255];
	int i, n;
	printf("Enter something:");
	scanf("%s", word);
	n = strlen(word);
	for (i = n; i >= 0; i--)
		printf("%c", word[i]);
	return 0;

}