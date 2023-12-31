#include<iostream>
#include<vector>
using namespace std;

bool checksorted(vector<int>&v ,int& n ,int i ){
    if(i>n)
    {
        return true;
    }

    //1 case solve krna h
    if(v[i+1]<v[i])
    {
        return false;
    }
    //recurssion relation
    return checksorted(v,n,i+1);
}   

int main()
{
    vector<int> v{4,3,2,1};
    int n = v.size();
int i=0;
    bool issorted = checksorted(v,n,i);
    if(issorted)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"not sorted "<<endl;
    }
}