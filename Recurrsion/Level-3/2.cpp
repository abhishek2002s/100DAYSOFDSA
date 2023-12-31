#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& v,int s,int e,int& key)
{
    //base key
    //case 1->key not found

    //s>e -> invalid array
    if(s>e)
    return -1;

    int mid = (s+e)/2;

    //case 2-> key found
    if(v[mid]==key)
    {
        return mid;
    }
    //using teranry operator
//    return ( v[mid]<key ) ?binarysearch(v,mid+1,e,key):binarysearch(v,s,mid-1,key);
    

    //recurrsion relation
    
    // v[mid] < key -> right search
    if(v[mid]<key)
    {
       return  binarysearch(v,mid+1,e,key);
    }
    else{
      return  binarysearch(v,s,mid-1,key);
    }
    
}

int main()
{
    vector<int> v{10,20,30,40,50,60,70,80};
    int traget = 50;

    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = binarysearch(v,s,e,traget);
    cout<<"Answer is "<<ans<<endl;
}