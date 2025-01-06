#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
    string line;
    getline(cin, line);
    string new_line;
    int first_digit = -1, second_digit = -1;

    for (int i = 0; i < line.length(); i++) {
        if(isdigit(line[i])) {
            if(first_digit==-1) {
                first_digit=i;
            }
            else if(second_digit==-1) {
                second_digit=i;
                break;
            }
        }
    }
    if (first_digit == -1) {
        cout << "No digits";
    } else if (second_digit != -1) {
        for (int i = first_digit; i <= second_digit; i++) {
            cout << line[i];
        }
    } else {
        for (int i = first_digit; i < line.length(); i++) {
            cout << line[i];
        }
    }
}
