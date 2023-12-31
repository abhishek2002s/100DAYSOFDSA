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
int reversearray(char arr[])
{
    int i =0;
    int n = getLength(arr);
    int j= n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}



int main()
{
    char ch[100];
    cin>>ch;

    cout<<"Initally is "<<ch<<endl;
    reversearray(ch);
    cout<<"After reverse array "<<ch<<endl;
}