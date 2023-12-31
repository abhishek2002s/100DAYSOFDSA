#include<iostream>
#include<vector>
using namespace std;

// wave print matrix in col wise

void wavePrintmatrix(vector<vector<int>>v){
int m = v.size();
int n =v[0].size();

for(int col =0;col<n;col++)
{
    //even no. print Top to Bottom
    if((col & 1) == 0){
        for(int i=0;i<m;i++){
            cout<<v[i][col]<<" ";
        }
    }
    else{
        //odd no. print bottom to top
        for(int i= m-1;i>=0;i--){
            cout<<v[i][col]<<" ";
        }
    }
}

}

int main(){


vector<vector<int>>w  {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};

wavePrintmatrix(w);


}