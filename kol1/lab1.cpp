#include <iostream>

using namespace std;

void funkcija(int x) {
    if(x>0) {
        for(int i=1;i<=x;i++) {
            cout<<i<<" ";
        }
        cout<<endl;
        funkcija(x-1);
    }

}

int main() {
    int n;
    cin >> n;
    funkcija(n);

    return 0;
}
