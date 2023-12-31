#include <bits/stdc++.h>
using namespace std;

void Q(int z){
    z += z;
    cout<<z<<" "; 
}


void p(int *y)
{
int x = *y +2;
Q(x);
*y = x -1;
cout<<x<<" ";
}

int main()
{ 
 int x = 6;
 p(&x);
 cout<<x;
 return 0;
}   