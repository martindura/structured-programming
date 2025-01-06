#include <iostream>
using namespace std;

int main() {
    int start, finish;

    cin >> start >> finish;

    for (int i = start; i <= finish; i++) {
        bool isBlessed = true;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0 && digit != 2 && digit != 4 && digit != 6 && digit != 8) {
                isBlessed = false;
                break;
            }
            temp /= 10;
        }
        if (isBlessed) {
            cout << i << " ";
            return 0;
        }
    }
    cout<<"NE";
}


/*
Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
*/
