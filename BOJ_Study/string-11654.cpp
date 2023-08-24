// 11654 아스키코드
#include <iostream>
using namespace std;

int main()
{
    char c; // 문자를 입력받기 위해 char 변수 선언
    cin >> c; // 문자를 입력받음
    cout << (int)c; // c를 정수형으로 형변환해서 찍으면 c의 아스키코드 값을 출력
    return 0;
}