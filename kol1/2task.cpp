#include <iostream>
using namespace std;

int filp(int n) {
        int rev=0;
    while (n>0) {
        int ld=n%10;
        rev=rev*10 + ld;
        n/=10;
    }
    return rev;
}

int mid(int n) {
    int product=1;
    n/=10;
    while(n>=10){
        product = ( n % 10);
        n/=10;
    }
    return product;
}

int main() {
    int start, finish;
    cin>>start>>finish;
    for(int i=start; i<=finish; i++){
        cout<<i<<" ";
        int rd=0, ld=0, temp=i, delitel=0;
        rd = temp%10;
        ld = flip(i);
}
