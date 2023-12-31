// code sum of element of array...
#include<iostream>
using namespace std;

void main(){
    int n;cin>>n;
    int8_t sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<(int)sum<<endl;
    
}