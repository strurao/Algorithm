// 비 배열 + 향상 된 입출력
#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);	// 동기화 해제
	cin.tie(NULL);	// 묶음 해제

	int N, X;
	cin >> N >> X;

	int val;
	for (int i = 0; i < N; i++) 
	{
		cin >> val;
		if (val < X) 
		{
			cout << val << " ";
		}
	}

	return 0;
}