#include<bits/stdc++.h>
using namespace std;

void rev (string& s, int i, int j) {
    // base case
    if (i>j) return;

    // ek case solve kar lo baaki recursion sambhaal lega

    swap (s[i], s[j]);
    i++;
    j--;

    rev (s, i, j);

}

int main () {
    string name = "Vishal Kumar Pankaj";
    
    cout << "Before reversing: "<< name << endl;
    rev (name, 0, name.length() - 1);
    cout << "After reversing: "<< name << endl;
    return 0;
}