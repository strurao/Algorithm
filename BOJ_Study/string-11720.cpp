#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cin >> n; // n에 숫자의 개수 N을 입력받음
    string a; // 합할 숫자를 저장할 배열 선언
    cin >> a; // 합할 숫자를 a에 저장
    // sum = 0; // 숫자의 합을 저장할 변수, 초기값 0
    for (i = 0; i < n; i++) sum += a[i] - '0'; // 숫자 문자의 아스키코드 값에서 '0'의 아스키코드 값을 빼주면 숫자가 됨
    cout << sum; // 총합 출력
    return 0;
}