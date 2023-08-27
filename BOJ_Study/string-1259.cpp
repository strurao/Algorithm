// 팰린드롬수 https://www.acmicpc.net/problem/1259

#include <iostream>
#include <string>
#include <algorithm> //reverse 함수가 있는 헤더파일
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
	cin.tie(0);  // cin과 cout의 묶음 해제
	cout.tie(0); // cout의 묶음 해제

	string N;

	while (N != "0")
	{
		cin >> N;
		string buf = N;
		reverse(N.begin(), N.end());
		if (N == "0") break; // 0도 reverser하면 0으로 같다
		else if (N == buf) cout << "yes\n";
		else cout << "no\n";
	}
}