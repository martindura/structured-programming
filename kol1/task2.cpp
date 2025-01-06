#include <iostream>
#include <climits>
using namespace std;

int first_digit(int x) {
    while (x >= 10) {
        x /= 10;
    }
    return x;
}

int main() {
    int size;
    while (cin >> size) {
        if(size==0) {
            return 0;
        }
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        int max = -1, max_position=-1;
        for (int i = 0; i < size; i++) {
            if (first_digit(arr[i]) > max) {
                max = first_digit(arr[i]);
                max_position = i;
            }
        }

        cout << arr[max_position]<<endl;
    }

    return 0;
}
