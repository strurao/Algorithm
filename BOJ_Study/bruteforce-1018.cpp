// ü���� �ٽ� ĥ�ϱ� https://www.acmicpc.net/problem/1018

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string board[50];
int main()
{
	int n, m;
	cin >> n >> m; // ��� ��

}

/*
Ǯ�� ���� https ://cryptosalamander.tistory.com/13
M*N ũ���� ���带 �߶� 8x8ũ���� ü������ �������� �ϴµ�, �־��� ���忡�� 8x8 ü������ ���鶧, ���� ���� ��ĥ�ϴ� Ƚ���� ���ϴ� �����̴�.
�Է����δ� N�� M, ��� �� ����� �Է��ϰ� ���尡 ��� ��������� B(Black)�� W(White)�� �����Ͽ� �Է��Ѵ�.
*/