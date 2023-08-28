// 이항계수1 https://www.acmicpc.net/problem/11050
// 참고 https://artiper.tistory.com/69

#include <iostream>
using namespace std;

int combination(int n, int k)
{
	if (n == k || k == 0) return 1;
	return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	cout << combination(n, k);
	return 0;
}