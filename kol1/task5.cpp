#include <iostream>
using namespace std;
int rev(int x) {
    int reverse = 0;
    while (x > 0) {
        int ld = x % 10;
        reverse = reverse * 10 + ld;
        x /= 10;
    }
    return reverse;
}

int main() {
    int size,k;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cin>>k;
    for(int i=0;i<size;i++) {
        int temp=arr[i],num=0;
        while(temp>0) {
            int ld=temp%10;
            if(ld>k) {
                num=num*10+ld;
                arr[i]=num;
            }
            temp/=10;
        }
    }
    int max=rev(arr[0]);
    for(int i=0;i<size;i++) {

        if(arr[i]>max) {
            max=(arr[i]);
        }
    }
    cout<<rev(max);



    return 0;
}
