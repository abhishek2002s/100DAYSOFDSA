#include<iostream>
using namespace std;
 

//  converter up to lr && lr to up
int getLength(char name[]){
    int len =0;
    int i =0;

    while(name[i]!='\0'){
        len++;
        i++;
    }

    return len;
}


void convertlowerToupper(char arr[100]){
    int n = getLength(arr);

    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}
void convertupperTolower(char arr[100]){
    int n = getLength(arr);

    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
}

int main(){
    char ch[100];
    cin>>ch;

    convertlowerToupper(ch);
    cout<<ch<<endl;
    convertupperTolower(ch);
    cout<<ch;
}