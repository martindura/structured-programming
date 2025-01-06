#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double ratio(const string &sentence) {

    float counter_upper = 0, counter_lower = 0;
    for (char ch: sentence) {
        if (isalpha(ch)) {
            if (isupper(ch)) {
                counter_upper++;
            } else {
                counter_lower++;
            }
        }
    }
    float ratio = counter_upper*1.0 / counter_lower;
    return  ratio;
}


int main() {
    string a;
    int line = 0;
    int linemax = 0;
    double maxratio = 0.0;

    while (getline(cin, a)) {
        ratio(a);
        line++;
        if(ratio(a)>maxratio) {
            maxratio=ratio(a);
            linemax=line;
        }
        cout<<setprecision(2)<<ratio(a)<<" "<<a<<endl;
    }
    cout<<linemax;

    return 0;
}
