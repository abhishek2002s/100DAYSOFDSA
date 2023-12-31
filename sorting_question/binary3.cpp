#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// EKO_SPOJ *******************

bool ispossible(vector<long long int> tress,int m,int mid){
    long long treecount = 0;

    for(long long int i=0;i<tress.size();i++)
    {
        if(tress[i]>mid){
            treecount += tress[i]-mid;
        }
    }

    return treecount >=m;
}

long long int Maxsawbladhieght(vector<long long int>trees,int m){
    long long int start = 0;
    long long int end = *max_element(trees.begin(),trees.end());

    long long int ans = -1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(ispossible(trees,m,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans ;
}

int main()
{
    long long int n,m;
    cin>>n>>m;


    vector<long long int> trees;

    while(n--)
    {
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<Maxsawbladhieght(trees,m);



}