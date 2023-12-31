#include<iostream>
#include<string>
using namespace std;

class Animal{
    private:
    int weight;
public:
//state or properties
int age;
string type;

//behaviour
void eat(){
cout<<"Eating  "<<endl;
}

void sleep(){
cout<<"Sleeping"<<endl;
}

int getWeight(){
    return weight;
}

void setWeight(int w){
    weight =w;
}

};

int main(){
    
    //object creation


    //static memory allocation
      Animal ramesh;
      ramesh.age =12;
      ramesh.type = "Rahul";
       cout<<"Age of ramesh is "<<ramesh.age<<endl;
       cout<<"name of ramesh is "<<ramesh.type<<endl;
    //Dynamic memory

    //function call
ramesh.eat();
ramesh.sleep();


//used to acees priavte class outside of a class;
ramesh.setWeight(101);
cout<<"Weight is "<<ramesh.getWeight()<<endl;
    return 0;
}