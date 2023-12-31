#include<iostream>
using namespace std;

//PLAINDROME CHECK or not
int getLength(char name[]){
    int len =0;
    int i =0;

    while(name[i]!='\0'){
        len++;
        i++;
    }

    return len;
}


bool pallindrome(char ch[200]){
    int i =0;
    int n = getLength(ch);
    int j = n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
               i++;
              j--;
        }
        else{
          return false;
        }
    }
return true;
}

int main()
{
    char ch[200];
    cin.getline(ch,50);
 cout<<"initial is "<<ch<<endl;


    if(pallindrome(ch)){
        cout<<"Yes it is pallindrome"<<endl;
    }
    else{ 
        cout<<"NO its not pallindorme"<<endl;
    }

    
}