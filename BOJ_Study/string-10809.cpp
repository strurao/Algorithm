#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S; // 알파벳으로 이루어진 단어 S를 입력받음

    for (int i = 'a'; i <= 'z'; i++) // 단어 내에 a부터 z까지 존재여부 체크
    {
        int ck = 0; // 알파벳 존재 여부 체크하기 위한 변수 0으로 선언
        for (int j = 0; j < (int)S.size(); j++) // 단어 길이만큼 반복
        {
            if (S[j] == i) // 단어의 알파벳과 같다면 인덱스 출력 후 체크
            {
                cout << j << " ";
                ck = 1;
                break;
            }
        }
        if (ck == 0) cout << -1 << " "; // 알파벳이 없으면 -1 출력
    }

}