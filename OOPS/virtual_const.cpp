#include<iostream>
using namespace std;

class Base{
    public:

    //virtual cannot be allowed in constructer virtual Base() ->X
Base(){
        cout<<"Base Constructor\n";
    }
   virtual ~Base(){
        cout<<"Base Destr\n";
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout<<"Derived Constructor\n";
    }
    ~Derived(){
        cout<<"Derived Destr\n";
    }
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
