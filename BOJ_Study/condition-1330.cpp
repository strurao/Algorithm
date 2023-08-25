#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    // 삼항연산자를 cout 으로 쓸 경우에는 하나 주의 할 것이 삼항연산자 부분을 괄호로 감싸주어야 한다.
    cout << ((A > B) ? ">" : (A < B) ? "<" : "==");
    return 0;
}