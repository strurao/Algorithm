/*
���� Ž��

���ĵ� �迭���� Ư�� ���� ���� ���ϱ�

�� ������ �ð����⵵ O(logN)���� �����ϴ� �˰����� �䱸�ϰ� �ִ�.
- �Ϲ����� ���� Ž�����δ� �ð� �ʰ� ������ �޴´�.
- ������ �����Ͱ� ���ĵǾ� �����Ƿ� ���� Ž���� ������ �� �ִ�.
Ư�� ���� �����ϴ� ù ��° ��ġ�� ������ ��ġ�� ã�� ��ġ ���̸� ����� ������ �ذ��� �� �ִ�.
*/

#include <bits/stdc++.h>

using namespace std;

// ���� [left_value, right_value]�� �������� ������ ��ȯ�ϴ� �Լ�
int countByRange(vector<int>& v, int leftValue, int rightValue) { 
    // vector�� �Ѱ��ٶ� ���۷����� �Ѱ�����Ѵ�. �ȱ׷��� copy�ϸ鼭 �ð����⵵�� O(N)���� �þ��.

    // upper_bound: ���ĵ� ���Ϳ��� rightValue���� ū ù ��° ������ ��ġ�� ��ȯ
    vector<int>::iterator rightIndex = upper_bound(v.begin(), v.end(), rightValue);

    // lower_bound: ���ĵ� ���Ϳ��� leftValue �̻��� ó�� ��Ÿ���� ��ġ�� ��ȯ
    vector<int>::iterator leftIndex = lower_bound(v.begin(), v.end(), leftValue);

    // rightIndex�� leftIndex�� ���̷� [left_value, right_value] ���� ���� ������ ���� ���
    return rightIndex - leftIndex;
}

int n, x;
vector<int> v;

int main() {
    // �������� ���� N, ã���� �ϴ� �� x �Է¹ޱ�
    cin >> n >> x;

    // ��ü ������ �Է� �ޱ�
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // ���� [x, x] ������ �ִ� �������� ���� ���
    int cnt = countByRange(v, x, x);

    // ���� x�� ���Ұ� �������� �ʴٸ�
    if (cnt == 0) {
        cout << -1 << '\n';
    }
    // ���� x�� ���Ұ� �����Ѵٸ�
    else {
        cout << cnt << '\n';
    }
}
