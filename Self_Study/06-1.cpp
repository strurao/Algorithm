#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////
/* 
��������
- O(N^2)
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    for (int i = 0; i < n; i++) { // i �� ���� ���� �����Ϳ� ��ġ�� �ٲ� �� �ε��� (�Ź� ���� ��ġ)
        int min_index = i; // ���� �������� ���� ���� ������ �ε��� 
        for (int j = i + 1; j < n; j++) { // ���� ���� ������ ��ġ�� ã�Ƽ�
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]); // ���� ���ʰ� ���� ���� ������ ��ġ���� ���� �ٲ��ش�
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' '; // 0 1 2 3 4 5 6 7 8 9
    }
}

/////////////////////////////////////
/* ������ */

int arr[2] = { 3, 5 };

int main(void) {
    swap(arr[0], arr[1]);
    cout << arr[0] << ' ' << arr[1] << '\n';
}

/////////////////////////////////////
/*
��������
- ó������ ���� �����͸� �ϳ��� ��� ������ ��ġ�� �����Ѵ�
- ���� ���Ŀ� ���� ���� ���̵��� ���� ��������, �Ϲ������� �� ȿ�������� �����Ѵ�
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    for (int i = 1; i < n; i++) {
        // �ε��� i���� 1���� �����ϸ� �ݺ��ϴ� ����
        for (int j = i; j > 0; j--) {
            // �� ĭ�� �������� �̵�
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            // �ڱ⺸�� ���� �����͸� ������ �� ��ġ���� ����
            else break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

/////////////////////////////////////
/* 
�� ���� 
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int* arr, int start, int end) {
    if (start >= end) return; // ���Ұ� 1���� ��� ����
    int pivot = start; // �ǹ��� ù ��° ����
    int left = start + 1;
    int right = end;
    while (left <= right) {
        // �ǹ����� ū �����͸� ã�� ������ �ݺ�
        while (left <= end && arr[left] <= arr[pivot]) left++;
        // �ǹ����� ���� �����͸� ã�� ������ �ݺ�
        while (right > start && arr[right] >= arr[pivot]) right--;
        // �����ȴٸ� ���� �����Ϳ� �ǹ��� ��ü
        if (left > right) swap(arr[pivot], arr[right]);
        // �������� �ʾҴٸ� ���� �����Ϳ� ū �����͸� ��ü
        else swap(arr[left], arr[right]);
    }
    // ���� ���� ���� �κа� ������ �κп��� ���� ���� ����
    quickSort(arr, start, right - 1);
    quickSort(arr, right + 1, end);
}

int main(void) {
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

/////////////////////////////////////
/* 
������� 
*/

#define MAX_VALUE 9

int n = 15;
// ��� ������ ���� 0���� ũ�ų� ���ٰ� ����
int arr[15] = { 7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2 };
// ��� ������ �����ϴ� �迭 ����(��� ���� 0���� �ʱ�ȭ)
int cnt[MAX_VALUE + 1];

int main(void) {
    for (int i = 0; i < n; i++) {
        cnt[arr[i]] += 1; // �� �����Ϳ� �ش��ϴ� �ε����� �� ����
    }
    for (int i = 0; i <= MAX_VALUE; i++) { // �迭�� ��ϵ� ���� ���� Ȯ��
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << ' '; // ���⸦ �������� ������ Ƚ����ŭ �ε��� ���
        }
    }
}

//////////////////////////////////////
/* ���� ���̺귯�� �⺻ ���� */

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

////////////////////////////////////////
/* ���� ���̺귯�� Ű(Key) ���� ���� ���� */

class Fruit {
public:
    string name;
    int score;
    Fruit(string name, int score) {
        this->name = name;
        this->score = score;
    }
    // ���� ������ '������ ���� ����'
    bool operator <(Fruit& other) {
        return this->score < other.score;
    }
};

int main(void) {
    int n = 3;
    Fruit fruits[] = {
        Fruit("�ٳ���", 2),
        Fruit("���", 5),
        Fruit("���", 3)
    };
    sort(fruits, fruits + n);
    for (int i = 0; i < n; i++) {
        cout << '(' << fruits[i].name << ',' << fruits[i].score << ')' << ' ';
    }
}