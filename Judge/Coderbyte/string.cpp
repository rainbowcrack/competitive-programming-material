#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
    string ans;
    int n = str.length() - 1;

    for (int i = n; i >= 0; i--) {
        ans += str[i];
    }

    return ans;
}

// keep this function call here
int main(void) {
    cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
    return 0;
}
