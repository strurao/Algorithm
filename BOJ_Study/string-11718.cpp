#include <bits/stdc++.h>

using namespace std;

int main() {

	string s;

	while (true) {
		getline(cin, s); // 공백을 포함해서 문자열을 받을 수 있다
		if (s == "") break;

		cout << s << '\n';
	}

	return 0;
}