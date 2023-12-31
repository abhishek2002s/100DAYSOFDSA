#include<iostream>
#include<vector>
using namespace std;

int main()
{


//Method 1
    //craete vector
    vector<int> arr;


    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans;

    cout<<arr.size();
//insert
arr.push_back(5);
arr.push_back(6);

//print
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;



//Method 2

int n;
cin>>n;

vector<int> brr(n,-1);
cout<<"size of b" <<brr.size()<<endl;
cout<<"capacity of b "<<brr.capacity()<<endl;


for(int i =0;i<brr.size();i++)
{
    cout<<brr[i]<<" ";
}
cout<<endl;



////Method 3
vector<int> crr{10,20,30,40};
for(int i=0;i<crr.size();i++)
{
    cout<<crr[i]<<" ";
}

cout<<"Vector crr is empty or not"<<crr.empty()<<endl;

//Empty function
vector<int> drr;
cout<<"Vector drr is empty or not "<<drr.size();
}