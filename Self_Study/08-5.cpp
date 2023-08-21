/*
DP

효율적인 화폐 구성
*/

#include <bits/stdc++.h>
using namespace std;

int n, m; // N 가지 종류의 화폐, 희망출력값 M 
vector<int> arr;

int main()
{
	// 정수 N, M을 입력받기
	cin >> n >> m;
    // N 개의 화폐 단위 정보를 입력 받기
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // 한 번 계산된 결과를 저장하기 위한 DP 테이블 초기화
    vector<int> d(m + 1, 10001); // (0원부터 M원까지 각각의 금액에 대한 최소한의 화폐개수를 저장하기 위해 , 문제에서 M의 최대크기가 10000이라서 10001로 초기화)

    // DP 진행 - 보텀업
    d[0] = 0; // 0원은 아무것도 사용안해도 만들 수 있는 금액이라서 0

    for (int i = 0; i < n; i++) // i: 화폐 단위
    {   
        for (int j = arr[i]; j <= m; j++) // j: 화폐 금액
        {   
            if (d[j - arr[i]] != 10001) // (m - i)원을 만드는 방법이 존재하는 경우
            {   
                d[j] = min(d[j], d[j - arr[i]] + 1); // 비교 및 갱신
            }
        }
    }

    // 계산된 결과 출력
    if (d[m] == 10001) { // 최종적으로 M원을 만드는 방법이 없는 경우
        cout << -1 << '\n';
    }
    else {
        cout << d[m] << '\n';
    }
}