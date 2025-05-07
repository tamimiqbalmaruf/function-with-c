#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    int output = sum(10, 20);

    int output2 = sub(30, 20);

    int a, b;
    scanf("%d %d", &a, &b);

    int output3 = sum(a, b);

    printf("%d %d %d", output, output2, output3);
    return 0;
};