#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x,int y,int row,int col,int arr[][4],vector<vector<bool> >&visited
){
    if((x>=0 && x < row)&&(y>=0 && y < col)&&(arr[x][y] == 1) &&
    (visited[x][y] == false)){
        return true;
    } 
    else{
        return false;
    }
}

void solveMaze(int arr[4][4],int row,int col,int srcx,int srcy,
vector<vector<bool> >&visited,vector<string>& path,string output){

//base case
if(srcx == row-1 &&  srcy == col-1){
    //answer found
    path.push_back(output);
    return;
}


//Down ->  i+1,j
if(isSafe(srcx+1,srcy,row,col,arr,visited)){
    visited[srcx+1][srcy] = true;
    solveMaze(arr,row,col,srcx+1,srcy,visited,path,output + 'D');
    //backtracking
    visited[srcx+1][srcy] = false;
}


//left -> i,j-1
if(isSafe(srcx,srcy-1,row,col,arr,visited)){
    visited[srcx][srcy-1] = true;
    solveMaze(arr,row,col,srcx,srcy-1,visited,path,output + 'L');
     //backtracking
    visited[srcx][srcy-1] = false;
}

//right ->i,j+1
if(isSafe(srcx,srcy+1,row,col,arr,visited)){
    visited[srcx][srcy+1] = true;
    solveMaze(arr,row,col,srcx,srcy+1,visited,path,output + 'R');
     //backtracking
    visited[srcx][srcy+1] = false;
}

//UP -> i-1,j
if(isSafe(srcx-1,srcy,row,col,arr,visited)){
    visited[srcx-1][srcy] = true;
    solveMaze(arr,row,col,srcx-1,srcy,visited,path,output + 'U');
     //backtracking
    visited[srcx-1][srcy] = false;
}


}

int main(){
    int maze[4][4] = {{1,0,0,0},
    {1,1,0,1},
    {1,1,0,0},
    {0,1,1,1}};

if(maze[0][0] == 0){
    cout<<"No path Exists "<<endl;
    return 0;
}

int row = 4;
int col = 4;

vector<vector<bool> >visited(row,vector<bool>(col,false));
//src ki value k true mark kr dete hai
visited[0][0] = true;

vector<string>path;
string output = " ";

solveMaze(maze,row,col,0,0,visited,path,output);

cout<<"printing the result "<<endl;
for(auto i:path){
    cout<<i<<" ";
}
cout<<endl;

if(path.size()==0){
    cout<<"NO path exists "<<endl;
}
}