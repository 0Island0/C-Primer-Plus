#include<stdio.h>
int main()
{
	char ming[40], xing[40];
	printf("please enter your ming:");
	scanf("%s", ming);
	printf("please enter your xing:");
	scanf("%s", xing);
	printf("%s %s\n", ming, xing);
	printf("%*d %*d\n", strlen(ming), strlen(ming), strlen(xing), strlen(xing));
	printf("%s %s\n", ming, xing);
	printf("%-*d %-*d\n", strlen(ming), strlen(ming), strlen(xing), strlen(xing));
	return 0;
}
