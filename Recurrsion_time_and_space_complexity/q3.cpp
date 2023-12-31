#include <bits/stdc++.h>
using namespace std;

//t.c = O(logn)
//s.c = O(logn)
int BS(int a[],int k,int start,int end){
    if(start > end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(a[mid]==k){
        return mid;
    }
    else if(k>a[mid]){
        return BS(a,k,mid+1,end);
    }
    else{
        return BS(a,k,start,mid-1);
    }
}


int main()
{
int A[] = {1,2,3,4,6,8};
int k = 4;
int n = 6;
int start = 0;
int end = n-1;

if(BS(A,k,start,end)){
    cout<<"Element found";
    }
    else{
        cout<<"Element not present in array";
    }




}