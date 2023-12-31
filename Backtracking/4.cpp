#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// optiMA L SOLUTION FOR n-QUEEEN PROBLEM;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagonalCheck;
unordered_map<int,bool> BottomLeftDiagonalCheck;

 void printSolution(vector<vector<char> >&board,int n)
 {
for(int i=0;i<n;i++)
{
    for(int j =0;j<n;j++)
    {
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
 }

bool isSafe(int row,int col,vector<vector<char> >&board,int n){
    if(rowCheck[row] == true){
        return false;
    }
    if(upperLeftDiagonalCheck[n-1+col-row]== true){
        return false;
    }
    if(BottomLeftDiagonalCheck[row+col] == true){
        return false;
    }
    return true;
        
    }

void solve(vector<vector<char> >&board,int col,int n){
    //base case
    if(col>=n){
        printSolution(board,n);
        return;
    }

    //1 case solve karna hai baki  recurrsion sambhal lega


    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board,n)){
            //rakh do
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n-1+col-row] = true;
            BottomLeftDiagonalCheck[row+col] = true;
                        //recursion call
            solve(board,col+1,n);
            //backtracking
            board[row][col] = '-';
             rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] = false;
            BottomLeftDiagonalCheck[row+col] = false;
        }
    }
}

int main()
{
    int n= 4;
    vector<vector<char> >board(n,vector<char>(n,'-'));

    int col =0;
    solve(board,col,n);
}