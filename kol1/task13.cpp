#include <iostream>
#include <utility>
using namespace std;


int main() {
    int size;
    cin >> size;
    float matrix[100][100];
    float arr[100];
    int k = 0;
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cin >> matrix[r][c];
        }
    }
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (r == 0) {
                arr[k++] = matrix[r][c];

            } else if (r + c == size - 1) {
                arr[k++] = matrix[r][c];

            } else if (r == size - 1) {
                arr[k++] = matrix[r][c];

            }
        }
    }
    int z_index = k - 1;

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (r == 0) {
                matrix[0][c] = arr[z_index--];
            } else if (r>0 && r<size-1  && r + c == size - 1) {
                matrix[r][c] = arr[z_index--];
            } else if (r == size - 1) {
                matrix[r][c] = arr[z_index--];
            }
        }
    }


    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }




    return 0;
}
