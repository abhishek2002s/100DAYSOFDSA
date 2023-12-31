#include<iostream>
using namespace std;
//Binary to decimal
int main(){
    int b;
    cin>>b;
    int ans=0;
    int c=0;
    while(b){
        ans=ans+(b % 10) * (1 << c++);
        b/=10;
    }
    cout<<ans;
}