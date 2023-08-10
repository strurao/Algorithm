#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> i, pair<int, int> j) { return i.second < j.second; }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	vector<pair<int, int>> pv;

	// vector sort (오름차순)
	sort(v.begin(), v.end());

	// vector sort descending order (내림차순)
	sort(v.begin(), v.end(), greater<int>());

	// vector custom sort (비교함수)
	sort(pv.begin(), pv.end(), compare);


	/*
	[Example]
	default : 1 3 4 2 6 7 2 10 12 5
	sort : 1 2 2 3 4 5 6 7 10 12
	sort greater : 12 10 7 6 5 4 3 2 2 1
	*/

	return 0;
}