#include<iostream>
#include<vector>
using namespace std;

// seach in  a rotated sorted array

int findpivot(vector<int> arr)
{
    int  s= 0;
    int e= arr.size()-1;
    int mid =s+(e-s)/2;

    while(s<=e)
    {
        if(s==e)
        return s;
        if(mid<=e && arr[mid]>arr[mid+1])
        return mid;
        if(mid-1>=s & arr[mid-1]>arr[mid])
        return mid-1;

        if(arr[s]>arr[mid])
        e= mid-1;
        else
        s= mid+1;

        mid =s +(e-s)/2;
    }
return -1;
}

int binarySearch(vector<int> arr, int s, int e, int target) {
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s +(e-s)/2;
    }
    return -1;
}


int main()
{
    vector<int>arr{4,5,6,7,0,1,2};
    int target;
    cin>>target;
    int pivotIndex = findpivot(arr);
    int ans = 0;
        if(target >= arr[0] && target <= arr[pivotIndex]) {
            ans = binarySearch(arr, 0, pivotIndex, target);

        }
        else {
            ans = binarySearch(arr, pivotIndex+1, arr.size()-1, target);
        }

        cout<<"ans is "<<ans;
}