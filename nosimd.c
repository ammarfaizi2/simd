
#include <stdio.h>
#include <stdlib.h>

void add(int *a, int *b, int *c) {
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
	c[3] = a[3] + b[3];
}

int main() {
	int a[] = {1, 1, 1, 1};
	int b[] = {1, 1, 1, 1};
	int c[4];
	for (int i = 0; i < 3000000; ++i) {
		add(a, b, c);
	}
	return 0;
}
