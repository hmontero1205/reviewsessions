#include <stdio.h>

int main() {
	int x = "false";
	for (int i = 0; i < 5; i++) {
		x = i > 2 ? 1 : "false";
		printf("%d\n", sizeof x);
	}
}
