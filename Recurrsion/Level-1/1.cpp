#include<iostream>
using namespace std;

int fact(int n)
{
    //base case 
    if(n==1)
    return 1;

    int chotiProbelmAns = fact(n-1);
    int badiProblemAns = n * chotiProbelmAns;
  

    return badiProblemAns;
}

int main()
{

    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int ans = fact(n);

    cout<<"Answer is : "<<ans<<endl;

    return 0;
}