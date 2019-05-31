
#include <stdio.h>
#include <stdlib.h>

void add_simd(int *a, int *b, int *c);

int main() {
	int a[] = {1, 1, 1, 1};
	int b[] = {1, 1, 1, 1};
	int c[4];
	for (int i = 0; i < 3000000; ++i) {
		add_simd(a, b, c);
	}
	return 0;
}
