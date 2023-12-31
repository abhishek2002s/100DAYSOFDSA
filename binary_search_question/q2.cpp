#include<iostream>
#include<vector>
using namespace std;

//last occurence element in array
int lastOccur(vector<int> v,int target){
    int s =0;
        int e = v.size()-1;

        int  mid = s + (e-s)/2;
        int ans = -1;

        while(s<=e){
            if(v[mid]==target)
            {
                ans = mid;
                //search in right
                s= mid+1;

            }
            else if(v[mid]>target){
                //search in left
                e = mid-1;
            }
            else{
                //serach in right
                s = mid+1;
            }

            mid = s + (e-s)/2;
        }

    return ans;

}


int main()
{
vector<int> v{1,3,4,4,4,4,6,7};
int target = 4;
int indexlastOcc = lastOccur(v,target);
cout<<indexlastOcc<<" ";

}