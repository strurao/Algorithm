/*
정렬

두 배열의 원소 교체

- 핵심 아이디어: 매번 배열 A에서 가장 작은 원소를 골라서, 배열 B에서 가장 큰 원소와 교체한다.
- 가장 먼저 배열 A와 B가 주어지면 A에 대하여 오름차순 정렬하고, B에 대하여 내림차순 정렬한다.
- 이후에 두 배열의 원소를 첫 번째 인덱스부터 차례로 확인하면서 A의 원소가 B의 원소보다 작을 때에만 교체를 수행.
*/

#include<bits/stdc++.h>
using namespace std;

int n; // 배열 A, B의 원소 개수
int k; // 최대 k번의 바꿔치기 연산을 수행한다
vector<int> a, b;

bool compare(int x, int y) // 원소의 값이 더 큰 경우에 높은 우선순위를 가지도록 해서 내림차순 정렬을 하도록 한다.
{
	return x > y;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end()); // 일반적인 오름차순 정렬을 수행
	sort(b.begin(), b.end(), compare); // 내림차순 정렬을 수행
	int result = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] < b[i]) swap(a[i], b[i]);
		else break;
	}
	for (int i = 0; i < n; i++)
	{
		result += a[i];
	}
	cout << result << '\n';
	return 0;
}