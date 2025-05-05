#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int output = sum(10, 20);

    printf("%d", output);
    return 0;
};