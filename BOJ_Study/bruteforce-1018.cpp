// 체스판 다시 칠하기 https://www.acmicpc.net/problem/1018

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
	cin >> n >> m; // 행과 열

}

/*
풀이 참고 https ://cryptosalamander.tistory.com/13
M*N 크기의 보드를 잘라 8x8크기의 체스판을 얻으려고 하는데, 주어진 보드에서 8x8 체스판을 만들때, 가장 적게 색칠하는 횟수를 구하는 문제이다.
입력으로는 N과 M, 행과 열 사이즈를 입력하고 보드가 어떻게 생겼는지를 B(Black)와 W(White)로 구분하여 입력한다.
*/