#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n--;
    int  maxNum = 0,maxValue = 0;

    for (int i = n; i >= 1; i--) {
        int value = 0;
        for (int j = 1; j <= n / 2; j++) {
            if (i % j == 0) {
                value += j;
                if (value > maxValue) {
                    maxNum = i;
                    maxValue = value;
                }
            }
        }
    }
    cout << maxNum;


    return 0;
}





