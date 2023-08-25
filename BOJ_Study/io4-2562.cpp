#include <stdio.h>

int main() {
	int input;
	int max = 0;
	int pos = 0;

	// for문의 index 값(i)은 몇 번째인지를 명확히 하기 위해 0 ~ 8 이 아닌 1 ~ 9(10미만) 로 했다
	for (int i = 1; i < 10; ++i) {
		scanf("%d", &input);
		if (input > max) {
			max = input;
			pos = i;
		}
	}

	printf("%d\n%d\n", max, pos);
	return 0;
}