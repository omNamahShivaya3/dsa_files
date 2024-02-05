/* symbol table - address is stored with the integer
the storage address is fetched with ampersand
0x starts with means that it is hexa decimal. 
After it starts the actual address.
Pointers are variables storing address of other variables.
Integers are stored in 4 bytes. */
#include<bits/stdc++.h>
using namespace std;
int main () {
    int i = 10;
    int* p = &i;

    cout << sizeof(p) << endl;
    cout << i << endl;
    cout << *p << endl;
    cout << endl;
    
    i++; 
    cout << i << endl;
    cout << *p << endl;
    cout << endl;

    int a = *p;
    a++;
    cout << a << endl;
    cout << *p << endl;
    cout << endl;

    i = 12;
    cout << i << endl;
    cout << *p << endl;
    cout << endl;

    *p = 23;
    cout << i << endl;
    cout << *p << endl;
    cout << endl;

    (*p)++;
    cout << i << endl;
    cout << *p << endl;

    int j = 50;
    int *ptr = &j;
    cout << (*ptr)++ << " ";
    cout << j << endl;

}

// Initialize a null pointer instead of garbage value, 
// then it for confirm show error. 