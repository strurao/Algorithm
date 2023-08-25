#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A, B;

	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0) { // A와 B가 모두 0이라면 while문 종료
			break;
		}
		cout << A + B << "\n";
	}

	return 0;
}


/*
참고 : https://st-lab.tistory.com/254
*/