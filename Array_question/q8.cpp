#include<iostream>
#include<vector>
using namespace std;

//Uunion of two array:

int main()
{
    int arr[] = {1,4,5,6,7};
    int size = 5;
    int brr[] = {2,3,9,0,8};
    int sizeb = 5;

    vector<int> ans;

    //push all element of vector arr
    for(int i=0;i<size;i++)
    {
        ans.push_back(arr[i]);
    }

    //push all element of vector brr
    for(int i=0;i<sizeb;i++ )
    {
        ans.push_back(brr[i]);
    }

    //print ans 
    cout<<"printing array "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}