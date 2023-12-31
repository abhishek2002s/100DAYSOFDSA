#include<iostream>
using namespace std;

int func(int x)
{
    if(x==2){
        return 2;
    }
    cout<<'+';
    func(x-1);
}
int main(){
int n =func(6);
cout<<n<<endl;
return 0;
}