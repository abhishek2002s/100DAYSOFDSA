#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int> v{1,2,3,4,5,6};
    int arr[] = {1,2,4,56,75};
    int size = 5;

    if(binary_search(v.begin(),v.end(),3)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    if(binary_search(arr,arr+size,75)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }


}