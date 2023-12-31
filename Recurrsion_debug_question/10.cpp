#include<iostream>
using namespace std;

void func(char input[],char c1,char c2)
{
    if(input[0] == '\0') return ;
    if(input[0] == c1) input[0] = c2;
    func(input+1,c1,c2);
}
int main(){ 
    func("abcd",'a','x');

return 0;
}