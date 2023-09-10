// °ö¼À https://www.acmicpc.net/problem/1629

#include<iostream>
using namespace std;
typedef long long ll;

ll a, b, c;
ll go(ll a, ll b)
{
	if (b == 1) return a % c; // ±âÀú»ç·Ê
	ll ret = go(a, b / 2);
	ret = (ret * ret) % c;
	if (b % 2) ret = (ret * a) % c; // È¦¼öÇÏ¸é ÇÑ¹ø ´õ °öÇØÁà¾ß ÇÑ´Ù
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c;
	cout << go(a, b) << '\n';
	return 0;
}