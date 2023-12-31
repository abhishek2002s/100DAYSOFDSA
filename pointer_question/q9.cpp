#include <bits/stdc++.h>
using namespace std;

void changesign(int *p)
{
    *p = (*p) * -1;
}

int main()
{ 
   int a = 5;
   changesign(&a);
   cout<<a<<endl;
} 