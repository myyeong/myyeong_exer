#include <stdio.h>

int main()
{
	float x;

	printf("실수를 입력하시오: ");
	scanf("%f", &x);

	printf("실수형식으로는 %f입니다.\n", x);
	printf("지수형식으로는 %e입니다.\n", x);

	return 0;
}