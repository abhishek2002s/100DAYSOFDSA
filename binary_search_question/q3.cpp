#include<iostream>
#include<vector>
using namespace std;

//last occurence element in array
int Missele(vector<int> v){
    int s =0;
        int e = v.size()-1;

        int  mid = s + (e-s)/2;
        int ans = -1;

        while(s<=e){
            if(v[mid]==mid+1)
            {
                //search in right
                s= mid+1;

            }
            else{
                ans = mid+1;
                //serach in left
                e = mid-1;
            }

            mid = s + (e-s)/2;
        }

    return ans;

}


int main()
{
vector<int> v{1,2,3,4,6,7,8};
// int target = 4;
int missingElement = Missele(v);
cout<<missingElement<<" ";

}