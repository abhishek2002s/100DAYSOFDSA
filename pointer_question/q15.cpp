#include <bits/stdc++.h>
using namespace std;

void inc(int **p)
{
(**p)++;
}

int main()
{ 
int a =10;
int *ptr = &a;
inc(&ptr);
cout<<a<<endl;
}  