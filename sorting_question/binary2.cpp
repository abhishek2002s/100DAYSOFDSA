#include <bits/stdc++.h>
using namespace std;
//Agressive cow problem++++++++++++++++++++###################****************

// } Driver Code Ends
// User function Template for C++

class Solution {
public:

bool ispossible(vector<int> &stalls ,int k, int sol)
{
    int c =1;
    int pos = stalls[0];
    
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-pos>=sol){
            c++;
            pos = stalls[i];
        }
        if(c==k)
        {
            return true;
        }
    }
    return false;
}

    int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int end = stalls[stalls.size()-1]-stalls[0];
    
    int ans = -1;
    
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        
        if(ispossible(stalls,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {


    // freopen ("output_gfg.txt", "w", stdout)
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends