//Lecture 19: C++ STL
#include<bits/stdc++.h>
using namespace std;

void printArr (int array[], int size) {
for (int i = 0; i<size; i++) cout<<array[i]<<" ";
cout<<endl;
}

int main () {
    
int basicArr[3] = {1, 2, 3}; /*basic array*/
cout<<"Contents of basic array: ";
printArr (basicArr, 3);
cout<<endl;

array<int, 4> a = {1, 2, 3, 4}; /*stl array*/
int size = a.size(); /*size function*/
cout<<"Contents of stl array: ";
for (int i=0; i<size; i++) {
cout<<a[i]<<" ";
}

cout<<"\nElement at 2nd Index: "<<a.at(2)<<endl; /*at function*/
cout<<"Empty or not: "<<a.empty()<<endl; /*check if empty*/

/*STL Vector: It is static in nature unlike array, will double its size if more elements are pushed.
#include<vector>

*/
vector<int> v;
cout<<"Capacity: "<<v.capacity()<<endl;
v.push_back(1);
cout<<"Capacity: "<<v.capacity()<<endl;
v.push_back(2);
cout<<"Capacity: "<<v.capacity()<<endl;
v.push_back(3);
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"Size: "<<v.size()<<endl;
cout<<"Front element: "<<v.front()<<endl;
cout<<"Back element"<<v.back()<<endl;

return 0;
}























































