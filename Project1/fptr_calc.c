#include <stdio.h>
#include "my_math.h"

void MyAbs(int* p) {
	if (*p < 0)*p = (*p) * (-1);
}

int main(void) {
	int x = -3, y = -2;
	int sum = Sum(x, y, MyAbs, NULL);
	int sub = Sub(x, y, MyAbs, MyAbs);
	int mul = Mul(x, y, NULL, NULL);
	int div = Div(x, y, NULL, MyAbs);
	int rem = Rem(x, y, MyAbs, NULL);

	printf("|%d| + %d = %d\n", x, y, sum);
	printf("|%d| - |%d| = %d\n", x, y, sub);
	printf("%d * %d = %d\n", x, y, mul);
	printf("%d / |%d| = %d\n", x, y, div);
	printf("|%d| %% %d = %d\n", x, y, rem);

	return 0;
}