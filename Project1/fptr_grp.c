#include <stdio.h>

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }
int Rem(int a, int b) { return a % b; }

int main(void) {

	int(*p[5])(int, int) = {
		&Sum, &Sub,&Mul,&Div,&Rem
	};
	int x = 9, y = 4;
	char op_table[5] = { '+','-','*','/','%' };

	for (int i = 0; i < sizeof(op_table); i++) {
		printf("%d %c %d = %d\n",
			x, op_table[i], y, (*p[i])(x, y));
	}

	return 0;
}