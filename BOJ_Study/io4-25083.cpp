#include <iostream>
#include <string>

using namespace std;

int main() {

	string s = "         ,r'\"7\n";     //   \", \n 이 제어문자다.
	s += "r`-_   ,'  ,/\n";             //   \n 이 제어문자다.
	s += " \\. \". L_r'\n";             //   \\, \", \n 이 제어문자다.
	s += "   `~\\/\n";                  //   \\, \n 이 제어문자다.
	s += "      |\n";                   //   \n 이 제어문자다.
	s += "      |";

	cout << s;
	return 0;
}

/*
단순 출력문제다.
다만, 제어 문자(이스케이프 시퀀스)에 대해 이해를 하고 있어야 한다.

백슬래시(\) + 문자 조합으로 해당 문자를 그대로 출력할 수 있게 만들었다.
이러한 조합을 '제어문자' 혹은 '이스케이프 시퀀스' 라고 불린다.
"(큰따옴표), '(작은 따옴표) 같은 문법적 기능을 담당하는 문자들은 \(백슬래시)와 결합하게 되면 상수로 취급된다.

https://st-lab.tistory.com/291
*/ 