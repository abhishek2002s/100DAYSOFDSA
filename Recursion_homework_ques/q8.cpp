#include<iostream>
#include<vector>
using namespace std;
//Buy and sell stock problem*********

class Solution {
public:

void maxprofitfind(vector<int>& arr,int i,int&minprice,int&maxprofit){

    //base case
    if(i==arr.size()){
        return;
    }

    //ek acse
    if(arr[i] < minprice){
    minprice = arr[i];
    }
    int todaysprofit = arr[i] - minprice;
    if(todaysprofit > maxprofit){
    maxprofit = todaysprofit;
    }

    //RE
    maxprofitfind(arr,i+1,minprice,maxprofit);
}

    int maxProfit(vector<int>& arr) {
     int minprice = INT16_MAX;
     int maxprofit = INT16_MIN;
    maxprofitfind(arr,0,minprice,maxprofit);
    return maxprofit;
    }
};