#include <iostream>
#include <cmath>
using namespace std;

int max(int x, int z) {
    if (x > z) {
        return x;
    }

    return z;
}



int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < n/2; i++) {
        int j = n - 1 - i;
        int left = arr[i];
        int right = arr[j];
        arr[i] = arr[j] = max(arr[i], arr[j]);
        if (left != arr[i]) counter++;
        if (right != arr[j]) counter++;

    }
    cout<<counter<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
