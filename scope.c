#include <stdio.h>

int z = 50; // global variable

int sum()
{
    int x = 20;
    printf("%d\n", x);
    printf("%d\n", z);
}

int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%d\n", z);
    sum();
    return 0;
};