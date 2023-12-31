#include<iostream>
#include<vector>
using namespace std;

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
    //check krna hai kya main current shell [row,col] per queen rakh sakte hai yh nahi

    int i =row;
    int j =col;

    //check row
    while(j>=0)
    {
        if(board[i][j]== 'Q'){
            return false;
        }
        j--;
    }

//check upper left diagonal
 i =row;
 j=col;
    while(i>=0 && j>=0)
    {
        if(board[i][j]== 'Q'){
            return false;
        }
        i--;
        j--;
    }


//check lower left diagonal
i =row;
j= col;
    while(i<n && j>=0)
    {
        if(board[i][j]== 'Q'){
            return false;
        }
        i++;
        j--;
    }

//kahin per bhi queen nahin milta hai toh return true;

        
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
            //recursion call
            solve(board,col+1,n);
            //backtracking
            board[row][col] = '-';
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