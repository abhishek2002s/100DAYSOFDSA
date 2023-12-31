#include<iostream>
using namespace std;

int main()
{
    int arr[500];

    int n;
    cout<<"How many number you want to add in array"<<endl;
    cin>>n;

    cout<<"Enter the numbers "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The Double values in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<2*arr[i]<<" ";
    }

    return 0;
}