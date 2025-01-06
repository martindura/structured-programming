#include <iostream>
using namespace std;


int main() {
    int matrix[100][100];
    int n, m, counter = 0, beta = 0,counter_vert=0,beta_vert=0;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
               beta++;
            } else {
                beta=0;
            }
            if (beta == 3) {
                counter++;
                break;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] == 1) {
                beta_vert ++;
            } else {
                beta_vert=0;
            }
            if (beta_vert == 3) {
                counter_vert++;
                break;
            }
        }
    }








    cout << counter<<" "<<counter_vert;


    return 0;
}
