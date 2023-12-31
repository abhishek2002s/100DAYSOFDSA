#include<iostream>
using namespace std;

//SquareRoot number using Binary Search

int findSqrt(int n){
    int s =0;
    int e =n-1;
    int mid = s+(e-s)/2;
    int target =n;
    int ans = -1;

    while(s<=e)
    {
        if(mid*mid == target)
        {
            return mid;
        }
        else if(mid*mid>target)
        {
            //search in left 
            e = mid-1;
        }
        else{
            //ans store
            ans = mid;
            //right serach
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int ans = findSqrt(n);

    int precision;
    cout<<"Enter the number of floating digtis inprecision"<<endl;
    cin>>precision;

    double step = 0.1;
    double finalans = ans;
    for(int i=0;i<precision;i++)
    {
        for(double j = finalans ;j*j<=n;j= j+step){
            finalans = j;

        }
        step = step/10;
    }
    cout<<"Final ans is "<<finalans<<endl;
}