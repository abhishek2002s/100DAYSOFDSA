#include<iostream>
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


void replacespace(char ch[]){
    int n = getLength(ch);

    for(int i=0;i<n;i++)
    {
        if(ch[i]==' '){
            ch[i] = '@';
        }
    }
}

int main()
{
    char ch[200];
    cin.getline(ch,50);
 cout<<"initial is "<<ch<<endl;
    replacespace(ch);
    cout<<"After replace  is "<<ch<<endl;

    
}