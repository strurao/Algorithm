#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;

	cin >> s;

	for (int i = 0; i < s.length() / 2; ++i) {
		if (s[i] != s[s.length() - i - 1]) {
			cout << "0" << "\n"; // �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.
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
	reverse(a.begin(),a.end());//�Ųٷ�
	if(a==b){ //�Ųٷ� ���� �ܾ�� ���� �ܾ�� ������.
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}

*/