#include<iostream>
using namespace std;
//count number of set bit

int main()
{
    int n=3;
    int ans = 0;

    while(n!=0)
    {
        if(n&1){
            //found one set bit, so increment set bit count
            ans++;
        }
        //right shift 
        n= n>>1;
    }

    cout<<"Number of set bit"<<" "<<ans;
}