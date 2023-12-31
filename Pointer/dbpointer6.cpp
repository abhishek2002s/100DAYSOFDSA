#include<iostream>
using namespace std;
int* solve(){
    int a = 5;
    cout<<&a<<endl;
    int* ans = &a;
    return ans;
}

int main()
{
cout<<solve();


}