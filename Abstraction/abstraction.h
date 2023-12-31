//craete a header file

#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual  void eat()=0 ;
    virtual void fly()=0;

    //classes that inhertits this class
    //has to implement pure virtual fnct.


};


class sparrow : public Bird{
public:
void eat()
{
    std::cout<<"Sparrow in eating\n";
}
void fly()
{
   std::cout<<"Sparrow in fluyng\n";
}
};
class Eagle : public Bird{
public:
void eat()
{
    std::cout<<"Eagle in eating\n";
}
void fly()
{
   std::cout<<"Eagle in fluyng\n";
}
};
class Peagion : public Bird{
public:
void eat()
{
    std::cout<<"Peagion in eating\n";
}
void fly()
{
   std::cout<<"Peagion in fluyng\n";
}
};


#endif // BIRD_H
