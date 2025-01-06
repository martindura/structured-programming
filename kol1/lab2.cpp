#include<iostream>
using namespace std;

int main() {
    int m;
    cin>>m;

    int matrix[100][100];
    int arr[100][100];

    for(int r=0;r<m;r++) {
        for(int c=0;c<m;c++) {
            cin>>matrix[r][c];
        }
    }
    for(int r=0;r<m;r++) {
        for(int c=0;c<m;c++) {
            cin>>arr[r][c];
        }
    }
    int counter=0;

    for(int c=0;c<m;c++) {
        bool same=true;
        for(int r=0;r<m;r++) {
            if(arr[r][c]!=matrix[r][c]) {
                same=false;
                break;
            }

        }
        if(same) {
            counter++;
        }

    }

    cout<<counter;








    return 0;
}


