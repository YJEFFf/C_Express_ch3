#include <stdio.h>

int main()
{
    double x, y, z, sum, avg;

    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("실수를 입력하시오: ");
    scanf("%lf", &y);
    printf("실수를 입력하시오: ");
    scanf("%lf", &z);

    sum = x + y + z;
    avg = sum / 3.0;

    printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);

    return 0;
}