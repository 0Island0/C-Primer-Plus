#include<stdio.h>
#define A 2.05
#define B 1.15
#define C 1.09
int main()
{
    double N, n = 0, m, zhekou, k = 0, i = 0, sum = 0;
    double n1 = 0, n2 = 0, n3 = 0;
    char ch;
    printf("Enter the letter:\n");
    printf("a)��     b)���     c)���ܲ�     q)�˳�����\n");
    scanf("%c", &ch);

    while (ch != 'q')
    {
        printf("Enter the pounds:");
        scanf("%lf", &n);
        switch (ch)
        {
        case'a':N = A; n1 = n1 + n; break;
        case'b':N = B; n2 = n2 + n; break;
        case'c':N = C; n3 = n3 + n; break;
        //case'q':goto end; break;
        }
        i = i + n;
        m = N * n;
        sum = sum + m;
        printf("Enter the letter:\n");
        printf("a)��     b)���     c)���ܲ�     q)�˳�����\n");
        scanf("%c", &ch); scanf("%c", &ch);
    }
    printf("2.05��Ԫ/�����󼻹���%lf�����۸�Ϊ%lf��Ԫ��\n", n1, n1 * A);
    printf("1.15��Ԫ/������˹���%lf�����۸�Ϊ%lf��Ԫ��\n", n2, n2 * B);
    printf("1.09��Ԫ/���ĺ��ܲ�����%lf�����۸�Ϊ%lf��Ԫ��\n", n3, n3 * C);
    printf("ԭ��sum=%lf��Ԫ��\n", sum);
    printf("����n=%lf��Ԫ��\n", i);
    if (sum >= 100)
    {
        zhekou = sum * 0.05;
        sum = sum * 0.95;
        printf("���ۺ�sum=%lf��Ԫ��\n", sum);
        printf("�ۿ�=%lf��Ԫ��\n", zhekou);
    }
    if (n > 0 && n <= 5)
    {
        k = 6.5;
        sum = sum + k;
    }
    else if (n > 5 && n <= 20)
    {
        k = 14;
        sum = sum + k;
    }
    else if (n > 20)
    {
        k = 14 + (n - 20) * 0.5;
        sum = sum + k;
    }
    printf("�˷ѺͰ�װ��=%lf��Ԫ��\n", k);
    printf("�ܷ���=%lf��Ԫ��\n", sum);
    printf("Done!");
    return 0;
}