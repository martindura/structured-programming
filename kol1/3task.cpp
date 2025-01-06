#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    string line;
    cin.ignore();
    while(n>0) {
        string new_line;
        getline(cin,line);
        for(char ch:line) {
            if(islower(ch)) {
                ch=(ch-'a'+k)%26+'a';
                new_line+=ch;
            }
            else if(isupper(ch)) {
                ch=(ch-'A'+k)%26+'A';
                new_line+=ch;
            }
            else new_line+=ch;

        }
        cout<<new_line<<endl;

        n--;
    }


    return 0;
}
