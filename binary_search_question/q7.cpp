#include<iostream>
#include<vector>
using namespace std;
//binary serach in nearly sorted array

int Binary_serch_nearly_sorted(vector<int>arr,int target){
    int s= 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid+1]==target){
            return mid+1;
        }
      if(arr[mid]>target){
        e= mid-2;
      }
      else{
        s= mid+2;
      }
        
        mid = s +(e-s)/2;
    } 
}


int main()
{
vector<int> v{10,3,40,20,50,60,70};
int target = 40;
int ans = Binary_serch_nearly_sorted(v,target);
cout<<"index of "<<target<<" is "<<ans<<" ";

}