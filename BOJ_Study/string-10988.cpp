#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;

	cin >> s;

	for (int i = 0; i < s.length() / 2; ++i) {
		if (s[i] != s[s.length() - i - 1]) {
			cout << "0" << "\n"; // 팰린드롬이면 1, 아니면 0을 출력한다.
			return 0;
		}
	}

	cout << "1" << "\n";
	return 0;
}



/*

#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin>>a;
	b=a;
	reverse(a.begin(),a.end());//거꾸로
	if(a==b){ //거꾸로 읽은 단어와 원본 단어와 같을때.
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}

*/