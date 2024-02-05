#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (string& str, int i, int j) {
    // base case
    if (str[i] != str[j]) return false;

    else {
        checkPalindrome (str, i + 1, j - 1);
    }
    return true;
    
}

int main () {

    string name = "vissssssiv";
    bool ans = checkPalindrome (name, 0, name.length() - 1);
    cout << ans << endl;

    return 0; 
}