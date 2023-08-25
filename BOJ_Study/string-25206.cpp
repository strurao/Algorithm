#include <iostream>
using namespace std;

int main() {
	string majorName; // 전공과목의 과목명
	double avg = 0; // 전공평점
	float sumGrade = 0; // 학점의 총합
	double score[20]; 
	float grade[20];
	string input; // 등급

	for (int i = 0; i < 20; ++i)
	{
		cin >> majorName >> grade[i] >> input;

		if (input == "A+") score[i] = 4.5;
		else if (input == "A0") score[i] = 4.0;
		else if (input == "B+") score[i] = 3.5;
		else if (input == "B0") score[i] = 3.0;
		else if (input == "C+") score[i] = 2.5;
		else if (input == "C0") score[i] = 2.0;
		else if (input == "D+") score[i] = 1.5;
		else if (input == "D0") score[i] = 1.0;
		else if (input == "F") score[i] = 0.0;
		else if (input == "P") { score[i] = 0.0; grade[i] = 0; } //등급이 P인 과목은 계산에서 제외해야 한다

		avg += (score[i] * grade[i]);
		sumGrade += grade[i];
	}

	avg = avg / sumGrade; // 전공평점 = 전공과목별 (학점*과목평점)의 합 나누기 학점의 총합

	cout << fixed;
	cout.precision(6);
	cout << avg;
}

// https://st-lab.tistory.com/212