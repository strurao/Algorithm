// 나머지

#include <iostream>

using namespace std;

int main() {
	// 입력 방법을 향상 시킨 방법이긴 하나 워낙 입출력량이 적어 시간 차이가 나진 않을 것 같다.
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	/*
	  0으로 초기화를 해주어야 한다.
	  bool 배열을 활용 할 경우 bool count[42] = {false} 이런식으로
	  초기화 해줄 수 있다.

	  42로 나눈 나머지가 갖을 수 있는 수는 0~41 이므로 42 크기의 배열을 선언
	 */
	int count[42] = {}; 

	int v;
	for (int i = 0; i < 10; i++) {
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;
	}

	int result = 0;
	/* 
	  10개의 입력에 대해 배열 값을 모두 증가시켰다면, 
	  다시 한 번 배열을 순회하여 배열의 인덱스 중 1개 이상인 배열을 세어주면 된다.
 
	  배열을 순회하면서 적어도 한 번 이상 나온 경우에는
	  result 값을 증가시킨다. (서로 다른 수를 세기 위함)
	 */
	for (int v : count) {
		if (v > 0) {
			result++;
		}
	}
	cout << result;
	return 0;
}