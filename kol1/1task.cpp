#include <iostream>
#include<cstring>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cctype>
using namespace std;

int isPali(char arr[], int start, int end) {
    int counter = 0, i = start, j = end - 1;
    bool flag = true;

    while (i < end && j >= start) {
        if (tolower(arr[i]) != tolower(arr[j])) {
            flag = false;
        }

        i++;
        j--;
    }
    if (flag) {
        counter++;
    }
    return counter;
}


int main() {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        int counter = 0;
        const int max = 100;
        char arr[max];
        int start = 0, end = 0;
        cin.getline(arr, max);
        int i = 0;
        for (i = 0; arr[i] != '\0'; i++) {
            if (isspace(arr[i])) {
                end = i;
                counter += isPali(arr, start, end);
                start = end + 1;
            }
        }
        end = i;
        counter += isPali(arr, start, end);

        cout << arr << ": " << counter << endl;
    }

    return 0;
}
