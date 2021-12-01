#include<stdio.h>
void two(int a);
void three(int b);
int main()
{
	int up, down;
	int i;
	printf("Enter the up and down:");
	scanf("%d", &up);
	scanf("%d", &down);
	for (i = down;  i <= up; i++)
	{
		printf("%d ", i);
		two(i);
		three(i);
	}
}

void two(int a)
{
	printf("%d ", a * a);
}

void three(int b)
{
	printf("%d\n", b * b * b);
}