#include <iostream>
using namespace std;

int main() {
    int arr[9];
    int counta = 0;
    int countd = 0;

    for (int i = 1; i < 9; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 9; ++i) {
        if (arr[i] == i) {
            counta++;
        }
        if (arr[i] == 9 - i) {
            countd++;
        }
    }

    if (counta == 8) {
        printf("ascending");
    }
    else if (countd == 8) {
        printf("descending");
    }
    else {
        printf("mixed");
    }

    return 0;
}