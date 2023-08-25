#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	while (!(cin >> a >> b).eof()) {	// 혹은 eof() 대신 fail()을 사용해도 된다.
		cout << a + b << "\n";
	}

	return 0;
}

/*
이 번 문제의 키 포인트는 문제를 자세히 보면 몇 개를 입력받는지 알 수 없다는 것이다.

이렇게 주어진 입력 파일만 갖고 입력을 받을 때 더이상 읽을 수 있는 데이터가 없는 경우
즉, 파일의 끝일 때 이를 EOF(End Of File) 이라고 한다.

이 문제는 입력에서 더이상의 읽을 수 있는 데이터가 존재하지 않을 때 반복문을 종료하라는 것이었다
(참고로 우리는 일상적으로 문장의 끝을 Enter로 치지만, Enter(개행) 또한 하나의 '문자'다.
Ascii 코드표를 보면 LF가 눈에 보이지는 않지만 개행을 하는 값이다.)
끝까지 읽고난 뒤 그 다음 파일을 읽으려 할 때 읽을 데이터가 없을 때 EOF가 되는 것이다. (시점을 정확히 파악해야한다.)

c++ 표준 입력 방식인 cin을 사용하는 
eof() 함수는 파일의 끝에 도달한 뒤 읽고자 할 경우 true를 반환한다
(보통은 cin >> a >> b 를 읽은 후 스트림 객체가 반환되지만,  
위처럼 조건문 안에 있는 경우 연산자 오버로딩에 의해 bool 값으로 true 혹은 false값을 반환한다)
eof() 가 우리가 원하는 올바른 시점에 true가 되려면 "읽기 시도를 한 후"에 eof 검사를 해야한다
그렇기 때문에 (cin >> a >> b).eof() 방식으로 괄호 안의 cin >> a >> b를 통해 읽은 후 eof상태인지를 검사하는 것이다

출처 : https://st-lab.tistory.com/257
*/