#pragma once

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Div(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*));

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a);
	}
	if (NULL != pb) {
		(*pb)(&b);
	}
	return a + b;
}
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a);
	}
	if (NULL != pb) {
		(*pb)(&b);
	}
	return a - b;
}
int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a);
	}
	if (NULL != pb) {
		(*pb)(&b);
	}
	return a * b;
}
int Div(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a);
	}
	if (NULL != pb) {
		(*pb)(&b);
	}
	return a / b;
}
int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a);
	}
	if (NULL != pb) {
		(*pb)(&b);
	}
	return a % b;
}