#include<iostream>
using namespace std;

//climb stair question
int climbstair(int n)
{
    //base class 1
    if(n==0)
    {
        return 1;
    }
    // base class 2
    if(n==1){
        return 1;
    }

    int ans = climbstair(n-1)+climbstair(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    int ans = climbstair(n);
    cout<<"Answer is  : "<<ans<<endl;
}