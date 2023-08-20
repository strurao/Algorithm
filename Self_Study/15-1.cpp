/*
이진 탐색

정렬된 배열에서 특정 수의 개수 구하기

이 문제는 시간복잡도 O(logN)으로 동작하는 알고리즘을 요구하고 있다.
- 일반적인 선형 탐색으로는 시간 초과 판정을 받는다.
- 하지만 데이터가 정렬되어 있으므로 이진 탐색을 수행할 수 있다.
특정 값이 등장하는 첫 번째 위치와 마지막 위치를 찾아 위치 차이를 계산해 문제를 해결할 수 있다.
*/

#include <bits/stdc++.h>

using namespace std;

// 값이 [left_value, right_value]인 데이터의 개수를 반환하는 함수
int countByRange(vector<int>& v, int leftValue, int rightValue) { 
    // vector를 넘겨줄때 레퍼런스로 넘겨줘야한다. 안그러면 copy하면서 시간복잡도가 O(N)으로 늘어난다.

    // upper_bound: 정렬된 벡터에서 rightValue보다 큰 첫 번째 원소의 위치를 반환
    vector<int>::iterator rightIndex = upper_bound(v.begin(), v.end(), rightValue);

    // lower_bound: 정렬된 벡터에서 leftValue 이상이 처음 나타나는 위치를 반환
    vector<int>::iterator leftIndex = lower_bound(v.begin(), v.end(), leftValue);

    // rightIndex와 leftIndex의 차이로 [left_value, right_value] 범위 내의 데이터 개수 계산
    return rightIndex - leftIndex;
}

int n, x;
vector<int> v;

int main() {
    // 데이터의 개수 N, 찾고자 하는 값 x 입력받기
    cin >> n >> x;

    // 전체 데이터 입력 받기
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // 값이 [x, x] 범위에 있는 데이터의 개수 계산
    int cnt = countByRange(v, x, x);

    // 값이 x인 원소가 존재하지 않다면
    if (cnt == 0) {
        cout << -1 << '\n';
    }
    // 값이 x인 원소가 존재한다면
    else {
        cout << cnt << '\n';
    }
}
