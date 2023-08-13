#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////
/* 
선택정렬
- O(N^2)
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    for (int i = 0; i < n; i++) { // i 는 가장 작은 데이터와 위치가 바뀔 그 인덱스 (매번 앞쪽 위치)
        int min_index = i; // 현재 범위에서 가장 작은 원소의 인덱스 
        for (int j = i + 1; j < n; j++) { // 가장 작은 원소의 위치를 찾아서
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]); // 가장 앞쪽과 가장 작은 원소의 위치값을 서로 바꿔준다
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' '; // 0 1 2 3 4 5 6 7 8 9
    }
}

/////////////////////////////////////
/* 스와프 */

int arr[2] = { 3, 5 };

int main(void) {
    swap(arr[0], arr[1]);
    cout << arr[0] << ' ' << arr[1] << '\n';
}

/////////////////////////////////////
/*
삽입정렬
- 처리되지 않은 데이터를 하나씩 골라 적절한 위치에 삽입한다
- 선택 정렬에 비해 구현 난이도가 높은 편이지만, 일반적으로 더 효율적으로 동작한다
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    for (int i = 1; i < n; i++) {
        // 인덱스 i부터 1까지 감소하며 반복하는 문법
        for (int j = i; j > 0; j--) {
            // 한 칸씩 왼쪽으로 이동
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            // 자기보다 작은 데이터를 만나면 그 위치에서 멈춤
            else break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

/////////////////////////////////////
/* 
퀵 정렬 
*/

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int* arr, int start, int end) {
    if (start >= end) return; // 원소가 1개인 경우 종료
    int pivot = start; // 피벗은 첫 번째 원소
    int left = start + 1;
    int right = end;
    while (left <= right) {
        // 피벗보다 큰 데이터를 찾을 때까지 반복
        while (left <= end && arr[left] <= arr[pivot]) left++;
        // 피벗보다 작은 데이터를 찾을 때까지 반복
        while (right > start && arr[right] >= arr[pivot]) right--;
        // 엇갈렸다면 작은 데이터와 피벗을 교체
        if (left > right) swap(arr[pivot], arr[right]);
        // 엇갈리지 않았다면 작은 데이터와 큰 데이터를 교체
        else swap(arr[left], arr[right]);
    }
    // 분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬 수행
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
계수정렬 
*/

#define MAX_VALUE 9

int n = 15;
// 모든 원소의 값이 0보다 크거나 같다고 가정
int arr[15] = { 7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2 };
// 모든 범위를 포함하는 배열 선언(모든 값은 0으로 초기화)
int cnt[MAX_VALUE + 1];

int main(void) {
    for (int i = 0; i < n; i++) {
        cnt[arr[i]] += 1; // 각 데이터에 해당하는 인덱스의 값 증가
    }
    for (int i = 0; i <= MAX_VALUE; i++) { // 배열에 기록된 정렬 정보 확인
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << ' '; // 띄어쓰기를 기준으로 등장한 횟수만큼 인덱스 출력
        }
    }
}

//////////////////////////////////////
/* 정렬 라이브러리 기본 예제 */

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

////////////////////////////////////////
/* 정렬 라이브러리 키(Key) 기준 정렬 예제 */

class Fruit {
public:
    string name;
    int score;
    Fruit(string name, int score) {
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 낮은 순서'
    bool operator <(Fruit& other) {
        return this->score < other.score;
    }
};

int main(void) {
    int n = 3;
    Fruit fruits[] = {
        Fruit("바나나", 2),
        Fruit("사과", 5),
        Fruit("당근", 3)
    };
    sort(fruits, fruits + n);
    for (int i = 0; i < n; i++) {
        cout << '(' << fruits[i].name << ',' << fruits[i].score << ')' << ' ';
    }
}