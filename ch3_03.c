#include <stdio.h>

int main()
{
    double area, height, base;

    printf("삼각형의 밑변: ");
    scanf("%lf", &base);
    printf("삼각형의 높이: ");
    scanf("%lf", &height);

    area = 0.5 * height * base;

    printf("삼각형의 넓이: %lf\n", area);

    return 0;
}