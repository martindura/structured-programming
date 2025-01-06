#include <iostream>
using namespace std;


int main() {
    string line, new_line;

    while (getline(cin, line)) {
        bool in_word=true;
        for (char ch: line) {

            if (isalpha(ch)) {
                new_line += ch;
                in_word=true;
            } else if (in_word) {
                new_line += '\n';
                in_word=false;
            }
        }

        if (in_word) {
            new_line += '\n';

        }
    }
    cout << new_line;
    return 0;
}
