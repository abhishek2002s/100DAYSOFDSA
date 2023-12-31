#include<iostream>
using namespace std;

//Pascal Traingle #1

int main()
{
    int n;
    cin>>n;

for(int i=1;i<=n;i++){
    int c =1 ;
    for(int j=1;j<=i;j++)
    {
        cout<<c<<" ";
        c = c * (i-j)/j;
    }
    cout<<endl;
}



}