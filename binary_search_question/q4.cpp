#include<iostream>
#include<vector>
using namespace std;

//Peak element in array
int Peakindex(vector<int> v){
    int s =0;
        int e = v.size()-1;

        int  mid = s + (e-s)/2;

        while(s<e){
            if(v[mid]<v[mid+1])
            {
                //search in right
                s= mid+1;

            }
            else{
                
                e = mid;
            }

            mid = s + (e-s)/2;
        }

    return s;

}


int main()
{
vector<int> v{1,2,3,4,6,7,8};
// int target = 4;
int PeakElement = Peakindex(v);
cout<<PeakElement<<" ";

}