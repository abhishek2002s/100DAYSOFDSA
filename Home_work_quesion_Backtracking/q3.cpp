#include <bits/stdc++.h>
using namespace std;

//maximum sub array sum ****
class Solution {
public:

int maxSumArrayHelper(vector<int>&arr,int start,int end){
    //base case
    if(start == end ){
        return arr[start];
    }

    int maxLeftBorderSum = INT_MIN;
    int maxRightBorderSum = INT_MIN;
    int leftBorderSum =0 ;
    int rightBorderSum =0 ;

    int mid = start + ((end -start) >> 1);

    int maxLeftSum = maxSumArrayHelper(arr,start,mid);
    int maxRightSum = maxSumArrayHelper(arr,mid+1,end);


    //max cross border sum 
    for(int i= mid;i>=start;i--){
        leftBorderSum += arr[i];
        if(leftBorderSum>maxLeftBorderSum){
            maxLeftBorderSum = leftBorderSum;
        }
    }
    for(int i= mid+1;i<=end;i++){
        rightBorderSum += arr[i];
        if(rightBorderSum>maxRightBorderSum){
            maxRightBorderSum = rightBorderSum;
        }
    }


    int crossborderSum = maxLeftBorderSum + maxRightBorderSum;

    return max(maxLeftSum,max(maxRightSum,crossborderSum));
}


    int maxSubArray(vector<int>& arr) {
  return maxSumArrayHelper(arr,0,arr.size()-1);
}
    
};