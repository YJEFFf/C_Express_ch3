#include <stdio.h>

int main()
{
    double F, C;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &F);

    C = (5.0 / 9.0) * (F - 32);

    printf("섭씨값은 %lf도입니다.\n", C);

    return 0;
}