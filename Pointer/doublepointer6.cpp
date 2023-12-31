#include<iostream>
using namespace std;

// pass by value 
void solve(int num){
    num++;
}

//pass by reference
void solver(int& num)
{
    num++;
}

void solve(int* val){
    *val = *val +1;
}

void solve(int*& p){
    p = p+1;
}


int main()
{
    int a = 5;
    solver(a);
    cout<<a<<endl;

    int a = 12;
    solve(&a);
    cout<<a<<endl;

    int a = 5;
    int* p = &a;

    cout<<"Before"<<p<<endl;
    solve(p);
    cout<<"After"<<p<<endl;
}