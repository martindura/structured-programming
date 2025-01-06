#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // 2 1 2 3 4
    int occur = 0, max = -1, max_pos = -1;
    for (int j = 1; j < 10; j++) {
        occur = 0;
        for (int i = 0; i < size; i++) {
            if (j == arr[i]) {
                occur++;
                if (occur > max) {
                    max = occur;
                    max_pos = arr[i];
                }
            }
        }
    }
    int occur2 = 0, max2 = -1, max_pos2 = -1;
    for (int j = 1; j < 10; j++) {
        if (j == max_pos)continue;
        occur2 = 0;
        for (int i = 0; i < size; i++) {
            if (j == arr[i]) {
                occur2++;
                if (occur2 > max2) {
                    max2 = occur2;
                    max_pos2 = arr[i];
                }
            }
        }
    }

    int matrix[100][100];
    for (int i = 0; i < max_pos; i++) {
        for (int j = 0; j < max_pos2; j++) {
            cout << '*'<<" ";
        }
        cout << endl;
    }


    return 0;
}
