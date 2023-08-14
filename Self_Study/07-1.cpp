/*
이진 탐색: 범위를 반씩 좁혀가는 탐색
- O(logN)
- 전제 조건이 데이터 정렬이다
*/

#include <bits/stdc++.h>
using namespace std;


////////////////////////////////////////
/* 순차탐색 */

int sequantialSearch(int n, string target, vector<string> arr) {
    // 각 원소를 하나씩 확인하며
    for (int i = 0; i < n; i++) {
        // 현재의 원소가 찾고자 하는 원소와 동일한 경우
        if (arr[i] == target) {
            return i + 1; // 현재의 위치 반환 (인덱스는 0부터 시작하므로 1 더하기)
        }
    }
    return -1; // 원소를 찾지 못한 경우 -1 반환
}

int n; // 원소의 개수
string target; // 찾고자 하는 문자열
vector<string> arr;

int main(void) {
    cout << "생성할 원소 개수를 입력한 다음 한 칸 띄고 찾을 문자열을 입력하세요." << '\n';
    cin >> n >> target;

    cout << "앞서 적은 원소 개수만큼 문자열을 입력하세요. 구분은 띄어쓰기 한 칸으로 합니다." << '\n';
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        arr.push_back(x);
    }

    // 순차 탐색 수행 결과 출력
    cout << sequantialSearch(n, target, arr) << '\n';
}


////////////////////////////////////////
/* 재귀 함수를 이용한 이진 탐색 */

// vector를 넘겨줄때 레퍼런스로 넘겨줘야한다. 안그러면 copy하면서 시간복잡도가 O(N)으로 늘어난다.
int binarySearch(vector<int>& arr, int target, int start, int end) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    // 찾은 경우 중간점 인덱스 반환
    if (arr[mid] == target) return mid;
    // 중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
    else if (arr[mid] > target) return binarySearch(arr, target, start, mid - 1);
    // 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
    else return binarySearch(arr, target, mid + 1, end);
}

int n, target2;
vector<int> arr2;

int main(void) {
    // n(원소의 개수)와 target(찾고자 하는 값)을 입력받기 
    cin >> n >> target;
    // 전체 원소 입력받기 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    // 이진 탐색 수행 결과 출력 
    int result = binarySearch(arr2, target2, 0, n - 1);
    if (result == -1) {
        cout << "원소가 존재하지 않습니다." << '\n';
    }
    else {
        cout << result + 1 << '\n'; // 사용자 친화적 UI라고 생각하면 된다
    }
}


////////////////////////////////////////
/* 반복문을 이용한 이진 탐색 */

// vector를 넘겨줄때 레퍼런스로 넘겨줘야한다. 안그러면 copy하면서 시간복잡도가 O(N)으로 늘어난다.
int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
        // 찾은 경우 중간점 인덱스 반환
        if (arr[mid] == target) return mid;
        // 중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
        else if (arr[mid] > target) end = mid - 1;
        // 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
        else start = mid + 1;
    }
    return -1;
}

int n, target3;
vector<int> arr3;

int main(void) {
    // n(원소의 개수)와 target(찾고자 하는 값)을 입력 받기 
    cin >> n >> target3;
    // 전체 원소 입력 받기 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr3.push_back(x);
    }
    // 이진 탐색 수행 결과 출력 
    int result = binarySearch(arr3, target3, 0, n - 1);
    if (result == -1) {
        cout << "원소가 존재하지 않습니다." << '\n';
    }
    else {
        cout << result + 1 << '\n'; // 사용자 친화적 UI라고 생각하면 된다
    }
}

////////////////////////////////////////
/* 
C++ STL lower_bound, upper_bound
정렬된 컨테이너에서 특정 값을 찾거나 범위를 찾는 데 사용 
*/

int main() {
    vector<int> arr = { 1, 2, 2, 2, 3, 4, 5, 5, 6 };

    // lower_bound 사용 예시
    int target = 2;
    auto lower = lower_bound(arr.begin(), arr.end(), target);
    if (lower != arr.end() && *lower == target) {
        cout << "lower_bound: Found " << target << " at index " << (lower - arr.begin()) << endl;
    }
    else {
        cout << "lower_bound: Element " << target << " not found." << endl;
    }

    // upper_bound 사용 예시
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
