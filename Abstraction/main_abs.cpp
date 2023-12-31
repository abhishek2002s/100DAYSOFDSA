#include<iostream>
#include"abstraction.h"
using namespace std;

//using abstraction.h header file

void birddoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
}


int main()
{
    // Bird *bird = new sparrow();
     Bird *bird = new Peagion ();
    birddoesSomething(bird);
    return 0;
}
