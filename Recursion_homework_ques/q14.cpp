#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//Number of dice roll with target sum 
class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        
        //base
        if(target < 0) return 0;
        if(n==0 && target == 0) return 1;
        if(n==0 && target != 0) return 0;
        if(n!=0 && target == 0) return 0;

        //ek  case
        int ans =0;
        for(int i=1;i<=k;i++)
        {
            ans = ans + numRollsToTarget(n-1,k,target -i);
        }
        return ans;
    }
};