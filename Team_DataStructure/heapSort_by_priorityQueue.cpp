// 이 방법을 사용하면 별도의 최소 힙 구현없이 기본 제공되는 최대 힙을 사용하여 오름차순 정렬을 할 수 있습니다.

#include <bits/stdc++.h>
using namespace std;

void heapSort(vector<int>& arr) {
    priority_queue<int> h; // 최대힙 (큰 값부터 나오는 내림차순)

    // 모든 원소를 차례대로 힙에 삽입
    for (int i = 0; i < arr.size(); i++) {
        h.push(-arr[i]); // 데이터를 넣을 때와 뺄 때 -부호를 사용하면 오름차순 정렬로 정렬이 가능하다.
    }
    // 힙에 삽입된 모든 원소를 차례대로 꺼내어 출력
    while (!h.empty()) {
        printf("%d\n", -h.top());
        h.pop();
    }
}

int n;
vector<int> arr;

int main() {
    cin >> n; // 10 20 30
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        arr.push_back(x);
    }
    heapSort(arr); // 30 20 10
}