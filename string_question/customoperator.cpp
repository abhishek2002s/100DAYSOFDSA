#include<iostream>
#include<algorithm>
#include<vector>
using namespace  std;

bool cmp(char first,char second){
    return first>second;
}

// custom comparator
bool comp(int a ,int b){
    return a>b;
}


int main()
{
    string s ="babbar";
    sort(s.begin(),s.end(),cmp);

    cout<<s<<endl;

    vector<int> v{5,3,2,4,1};
    sort(v.begin(),v.end(),comp);
    for(auto i:v){
        cout<<i<<" ";
    }
cout<<endl;

vector<string> str{"love","babbar","rahul","sandeep"};

}