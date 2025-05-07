#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    int output = sum();

    printf("%d", output);
    return 0;
};