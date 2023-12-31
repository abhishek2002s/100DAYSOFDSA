#include<iostream>
#include<vector>
using namespace std;

//House Robber Problem**********

class Solution {
public:

int rob_rec(vector<int>& nums,int i){
    //base case
    if(i >= nums.size()){
        return 0;
    }
    //ek case
    int robAmt1 = nums[i] + rob_rec(nums,i+2);
    int robAmt2 = 0 + rob_rec(nums,i+1);

    return max(robAmt1,robAmt2);
}
    int rob(vector<int>& nums) {
       return  rob_rec(nums,0);
    }
};