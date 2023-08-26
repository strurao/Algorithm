// 윤년
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  // C++의 입출력 버퍼를 C 표준 입출력과 동기화하지 않음
    cin.tie(NULL);  // cin과 cout의 묶음 해제
    cout.tie(NULL); // cout의 묶음 해제

    int y;

    cin >> y;

    // 기본 알고리즘은 먼저 4의 배수인지 여부를 본 뒤 4의 배수일 경우 400으로 나뉘어 떨어지는지, 100으로 나뉘어 떨어지는지 여부를 검사한다.
    if (y % 4 == 0) {
        if (y % 400 == 0) {     // 4의 배수이면서 400의 배수일 때(=윤년)
            cout << 1; // 첫째 줄에 윤년이면 1, 아니면 0을 출력한다.
        }
        else if (y % 100 != 0) {    // 4의 배수이면서 100의 배수가 아닐 때(=윤년) 
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }

    return 0;
}