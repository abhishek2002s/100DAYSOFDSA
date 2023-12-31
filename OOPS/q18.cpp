#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//abstraction using class example::

class abstractionExample{
    private:
    int num;
    char ch;

    public:
    void setMyvalue(int n, char c){
        num=n;
        ch=c;
    }

    void getMyvalue(){
        cout<<"Number is : " <<num <<endl;
        cout<<"Character is : " <<ch <<endl;
    }
};

int main()
{
    abstractionExample c;
    c.getMyvalue();
}