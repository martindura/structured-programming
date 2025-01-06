#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[100][100];
    int n;
    cin >> n;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cin >> arr[r][c];
        }
    }
    int max = INT_MIN, counter = 0;
    for (int c = 0; c < n; c++) {
        int sum = 0;

        for (int r = 0; r < n; r++) {
            sum += arr[r][c];
        }
        if (sum > max) {
            max = sum;
            counter = c;
        }


        for (int r = 0; r < n; r++) {
            arr[r][counter] += max;
        }
    }

    // Print the updated matrix
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
