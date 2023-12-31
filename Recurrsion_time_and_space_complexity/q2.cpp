#include <bits/stdc++.h>
using namespace std;

//t.c = O(n)
//s.c = O*(n)
int fact(int n){ 
    if(n==1)
    {
        return 1;
    }
    return n * fact(n-1);
}

int main()
{ 
  int n =4;
 int ans = fact(n);
 cout<<ans<<endl;
} 