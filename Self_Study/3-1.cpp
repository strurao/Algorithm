/* 
당장 좋은 것만 선택하는 그리디 

그리디 이론

거스름돈 문제

화폐의 종류가 K 라고 할 때, 소스코드의 시간 복잡도는 O(K)이다.
이 알고맂므의 시간 복잡도는 거슬러줘야 하는 금액과는 무관하며, 동전의 총 종류에만 영향을 받는다.
*/

#include <bits/stdc++.h>
using namespace std;

int n = 1260;
int cnt = 0;
int coinTypes[4] = { 500,100,50,10 };

int main()
{
	for (int i = 0; i < 4; i++)
	{
		int coin = coinTypes[i];
		cnt += n / coin;
		n %= coin;
	}
	cout << cnt << '\n';
}