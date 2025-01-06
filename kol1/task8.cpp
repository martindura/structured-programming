#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrixA[200][200];
    int matrixB[200][200];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrixA[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrixB[i][j] = matrixA[i][j];
            int count = 0;
            if (i > 0 && matrixA[i - 1][j] == 1) count++;
            if (i < n - 1 && matrixA[i + 1][j] == 1)count++;
            if (j > 0 && matrixA[i][j - 1] == 1)count++;
            if (j < n - 1 && matrixA[i][j + 1] == 1)count++;
            if (count > 2) {
                matrixB[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<< matrixB[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
