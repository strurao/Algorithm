/*
���� Ž��: ������ �ݾ� �������� Ž��
- O(logN)
- ���� ������ ������ �����̴�
*/

#include <bits/stdc++.h>
using namespace std;


////////////////////////////////////////
/* ����Ž�� */

int sequantialSearch(int n, string target, vector<string> arr) {
    // �� ���Ҹ� �ϳ��� Ȯ���ϸ�
    for (int i = 0; i < n; i++) {
        // ������ ���Ұ� ã���� �ϴ� ���ҿ� ������ ���
        if (arr[i] == target) {
            return i + 1; // ������ ��ġ ��ȯ (�ε����� 0���� �����ϹǷ� 1 ���ϱ�)
        }
    }
    return -1; // ���Ҹ� ã�� ���� ��� -1 ��ȯ
}

int n; // ������ ����
string target; // ã���� �ϴ� ���ڿ�
vector<string> arr;

int main(void) {
    cout << "������ ���� ������ �Է��� ���� �� ĭ ��� ã�� ���ڿ��� �Է��ϼ���." << '\n';
    cin >> n >> target;

    cout << "�ռ� ���� ���� ������ŭ ���ڿ��� �Է��ϼ���. ������ ���� �� ĭ���� �մϴ�." << '\n';
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        arr.push_back(x);
    }

    // ���� Ž�� ���� ��� ���
    cout << sequantialSearch(n, target, arr) << '\n';
}


////////////////////////////////////////
/* ��� �Լ��� �̿��� ���� Ž�� */

// vector�� �Ѱ��ٶ� ���۷����� �Ѱ�����Ѵ�. �ȱ׷��� copy�ϸ鼭 �ð����⵵�� O(N)���� �þ��.
int binarySearch(vector<int>& arr, int target, int start, int end) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    // ã�� ��� �߰��� �ε��� ��ȯ
    if (arr[mid] == target) return mid;
    // �߰����� ������ ã���� �ϴ� ���� ���� ��� ���� Ȯ��
    else if (arr[mid] > target) return binarySearch(arr, target, start, mid - 1);
    // �߰����� ������ ã���� �ϴ� ���� ū ��� ������ Ȯ��
    else return binarySearch(arr, target, mid + 1, end);
}

int n, target2;
vector<int> arr2;

int main(void) {
    // n(������ ����)�� target(ã���� �ϴ� ��)�� �Է¹ޱ� 
    cin >> n >> target;
    // ��ü ���� �Է¹ޱ� 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    // ���� Ž�� ���� ��� ��� 
    int result = binarySearch(arr2, target2, 0, n - 1);
    if (result == -1) {
        cout << "���Ұ� �������� �ʽ��ϴ�." << '\n';
    }
    else {
        cout << result + 1 << '\n'; // ����� ģȭ�� UI��� �����ϸ� �ȴ�
    }
}


////////////////////////////////////////
/* �ݺ����� �̿��� ���� Ž�� */

// vector�� �Ѱ��ٶ� ���۷����� �Ѱ�����Ѵ�. �ȱ׷��� copy�ϸ鼭 �ð����⵵�� O(N)���� �þ��.
int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
        // ã�� ��� �߰��� �ε��� ��ȯ
        if (arr[mid] == target) return mid;
        // �߰����� ������ ã���� �ϴ� ���� ���� ��� ���� Ȯ��
        else if (arr[mid] > target) end = mid - 1;
        // �߰����� ������ ã���� �ϴ� ���� ū ��� ������ Ȯ��
        else start = mid + 1;
    }
    return -1;
}

int n, target3;
vector<int> arr3;

int main(void) {
    // n(������ ����)�� target(ã���� �ϴ� ��)�� �Է� �ޱ� 
    cin >> n >> target3;
    // ��ü ���� �Է� �ޱ� 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr3.push_back(x);
    }
    // ���� Ž�� ���� ��� ��� 
    int result = binarySearch(arr3, target3, 0, n - 1);
    if (result == -1) {
        cout << "���Ұ� �������� �ʽ��ϴ�." << '\n';
    }
    else {
        cout << result + 1 << '\n'; // ����� ģȭ�� UI��� �����ϸ� �ȴ�
    }
}

////////////////////////////////////////
/* 
C++ STL lower_bound, upper_bound
���ĵ� �����̳ʿ��� Ư�� ���� ã�ų� ������ ã�� �� ��� 
*/

int main() {
    vector<int> arr = { 1, 2, 2, 2, 3, 4, 5, 5, 6 };

    // lower_bound ��� ����
    int target = 2;
    auto lower = lower_bound(arr.begin(), arr.end(), target);
    if (lower != arr.end() && *lower == target) {
        cout << "lower_bound: Found " << target << " at index " << (lower - arr.begin()) << endl;
    }
    else {
        cout << "lower_bound: Element " << target << " not found." << endl;
    }

    // upper_bound ��� ����
    target = 5;
    auto upper = upper_bound(arr.begin(), arr.end(), target);
    if (upper != arr.end() && *upper == target) {
        cout << "upper_bound: Found " << target << " at index " << (upper - arr.begin()) << endl;
    }
    else {
        cout << "upper_bound: Element " << target << " not found." << endl;
    }

    return 0;
}
