#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[200][200];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int k = 0, arr[100000];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            bool same = true;
            for (int z = 0; z < n; z++) {
                if (j != z && matrix[i][j] == matrix[i][z]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                arr[k++] = matrix[i][j];
            }
        }
    }
    if (k == 0) {
        cout << "N" << endl;
    } else {
        for (int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
