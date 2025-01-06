#include <iostream>
#include <climits>
using namespace std;


int main() {
    int matrix[100][100];
    int size, max=INT_MIN,min=INT_MAX;
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(j>i && matrix[i][j]>max) {
                max=matrix[i][j];
            }
            if(j<i && matrix[i][j]<min) {
                min=matrix[i][j];
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(j>i) {
                matrix[i][j]=max;
            }
            if(j<i) {
                matrix[i][j]=min;
            }
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<max<<" "<<min;







    return 0;
}
