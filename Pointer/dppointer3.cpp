#include <bits/stdc++.h>
using namespace std;


void solve(int** ptr){
    // ptr = ptr+1;//x =5;
    //*pt = *ptr +1; //x =5; but q value will updated on

    **ptr = **ptr +1;
}

int main()
{
    int x = 12;
    int* p = &x;
    int** q = &p;
    solve(q);

    cout<<x<<endl;
}