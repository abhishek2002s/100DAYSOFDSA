#include <bits/stdc++.h>
using namespace std;

//Debug this function::
// int* foo() {
//     int x = 10;
//     int* p = &x;
//     return p;
// }


//After debug function 
int* foo()
{
    int* p= new int;
    *p = 10;
    return p;
}

int main() {
    int* q = foo();
    cout << *q << endl; // Expected output: 10, Actual output: some random value
    return 0;
}