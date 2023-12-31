#include<iostream>
#include<vector>

//divide using binary search----
using namespace std;
int solve(int dividend,int divisor){
    int s =0;
    int e= abs(dividend);
    int mid = s+ (e-s)/2;
    int ans =-1;

    while(s<=e){
        //perfect solution
        if(abs(mid*divisor)==dividend){
            return mid;
        }
        if(abs(mid*divisor) > dividend){
            // left
            e =mid-1;
        }
        else{
            //right
            ans = mid;
            s = mid+1;
        }
        mid  = s+(e-s)/2;
    }
    if((divisor<0 && dividend <0)|| (divisor>0 && dividend>0)){
return ans;
}
else{
    return -ans;
}
}

int main()
{
    int dividend = 22;
    int divisor = -7;


    int ans = solve(dividend,divisor);
    cout<<"Ans is  "<<ans<<endl;
}