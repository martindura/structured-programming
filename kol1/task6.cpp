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

void function(int x[], int size) {
    if (size == 0) {

    }
    int temp = x[size];
    if (temp % 10 % 2 == 0 && rev(temp) % 10 % 2 == 1) {
        cout << x[size] << endl;
        function(x,size-1);
    }
    // else {
    //     function(x,size-1);
    // }
}

int main() {
    int size;
    cin >> size;
    int arr[size];

    int counter = 0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    function(arr,size);

    // for (int i = 0; i < size; i++) {
    //     if (function(arr[i]) != 0) {
    //         cout << function(arr[i]) << endl;
    //         counter++;
    //     }
    // }
    // if (counter == 0) {
    //     cout << "No such elements!";
    // }


    return 0;
}
