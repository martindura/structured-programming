#include <iostream>
using namespace std;

int rev(int x) {
    int reverse = 0;
    while (x > 0) {
        int ld = x % 10;
        reverse = reverse * 10 + ld;
        x /= 10;
    }
    return reverse;
}

int function(int x) {
    int temp = x;
    if (temp % 10 % 2 == 0 && rev(temp) % 10 % 2 == 1) {
        return x;
    }
}

int main() {
    int size;
    cin >> size;
    int arr[size];

    int counter = 0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (function(arr[i]) != 0) {
            cout << function(arr[i]) << endl;
            counter++;
        }
    }
    if (counter == 0) {
        cout << "No such elements!";
    }


    return 0;
}
