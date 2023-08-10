#include <bits/stdc++.h>
using namespace std;

void heapSort(vector<int>& arr) {
    priority_queue<int> h; // �ִ��� (ū ������ ������ ��������)

    // ��� ���Ҹ� ���ʴ�� ���� ����
    for (int i = 0; i < arr.size(); i++) {
        h.push(-arr[i]); // �����͸� ���� ���� �� �� -��ȣ�� ����ϸ� �������� ���ķ� ������ �����ϴ�.
    }
    // ���� ���Ե� ��� ���Ҹ� ���ʴ�� ������ ���
    while (!h.empty()) {
        printf("%d\n", -h.top());
        h.pop();
    }
}

int n;
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        arr.push_back(x);
    }
    heapSort(arr);
}