#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A, B;

	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0) { // A�� B�� ��� 0�̶�� while�� ����
			break;
		}
		cout << A + B << "\n";
	}

	return 0;
}


/*
���� : https://st-lab.tistory.com/254
*/