#include <stdio.h>
#include <math.h>

int main()
{
    int ans = ceil(4.2);
    int ans2 = floor(4.2);
    int ans3 = round(3.6);

    double ans4 = sqrt(25);

    int ans5 = pow(4, 3);
    int ans6 = abs(-10);
    printf("%d %d %d %d %d\n", ans, ans2, ans3, ans5, ans6);
    printf("%lf",ans4);
    return 0;
};