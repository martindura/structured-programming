#include <iostream>
using namespace std;


int fact(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * fact(x - 1);
}

int num(int x) {
    int temp = x;
    int num = 0;
    while (temp > 0) {
        int ld = temp % 10;
        num = num + fact(ld);
        temp /= 10;
    }
    return num;
}

void strong(int x,int y) {
    if(x==y) {
        cout<< x<<endl;
    }

}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Strong numbers:"<<endl;
    for (int i = 0; i < n; i++) {
        strong (arr[i],num(arr[i]));
    }



    return 0;
}
