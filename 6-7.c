#include<stdio.h>
#include<string.h>
int main()
{
	char word[40];
	int i,n;
	printf("Enter a word:");
	scanf("%s",word);
	n = strlen(word);
	//printf("%s,%d", word, n);
	for (i = n; i >= 0; i--)
		printf("%c", word[i]);
	return 0;

}