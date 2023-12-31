#include<iostream>
#include<string.h>
using namespace std;
int getLength(char name[]){
    int len =0;
    int i =0;

    while(name[i]!='\0'){
        len++;
        i++;
    }

    return len;
}

int main()
{
 char name[100];
 cin>>name;

 cout<<"Length is  : "<<getLength(name);
}