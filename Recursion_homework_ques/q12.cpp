#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//perfect sqaure using recurssion

class Solution {
public:

int numSquareHelper(int n){
    //base
    if(n==0) return 1;
    if(n<0) return  0;

    int ans = INT16_MAX;
    int i =1;
    int end = sqrt(n);

    while(i<=end){
        int perfectsquare = i*i;
        int numberofperfectsquare = 1 + numSquareHelper(n-perfectsquare);

        if(numberofperfectsquare < ans){
            ans = numberofperfectsquare;
        }
        i++;
    }
    return ans;
}
    int numSquares(int n) {
        return numSquareHelper(n)-1;
    }
};