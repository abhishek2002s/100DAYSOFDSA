#include<iostream>
using namespace std;

//create a macro
#define PI 3.14159465
#define MAXX(x, y) (x>y?x:y)

float circleArea(float r){
    return PI * r* r;
}


void fun(){
int x =4;
int y = 6;
int c = MAXX(x,y);

cout<<c<<endl;
}


int main(){
    cout<<circleArea(65.4)<<endl;
    fun();
}