#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;


int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    //z1;
    int z1 = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            z1 += matrix[i][j];
        }
    }

    //z2
    int z2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 0 or i == 1 && j == 2) {
                continue;
            }
            z2 += matrix[i][j];
        }
    }

    //z3
    int z3=0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(i==0) {
                z3+=matrix[i][j];
            }
            else if(i+j==3) {
                z3+=matrix[i][j];
            }
            else if(i==3) {
                z3+=matrix[i][j];
            }
        }
    }

    cout<<z1<<endl<<z2<<endl<<z3;
    return 0;
}
