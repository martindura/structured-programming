#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int temp1 = a, temp2 = b, counter1 = 0, counter2 = 0;
        while (temp1 > 0) {
            int digit1 = temp1 / 10 % 10;
            if (digit1 == c) {
                counter1++;
            }
            temp1 /= 100;
        }
        while (temp2 > 0) {
            int digit2 = temp2 / 10 % 10;
            if (digit2 == c) {
                counter2++;
            }
            temp2 /= 100;
        }



         if (counter1 > counter2) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }

    return 0;
}
