#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
    int size,counter=0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == arr[i + 1]) {
            arr[i] = arr[i] + arr[i];
            arr[i + 1] = 0;
        }
    }


    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            counter++;
            cout << arr[i] << " ";
        }
    }
    for (int i = 0; i < size-counter; i++) {
        cout<<0<<" ";
    }



    return 0;
}
