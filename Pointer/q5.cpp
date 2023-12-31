#include<iostream>
using namespace std;

//Function with pointer

void solve(int arr[]){
    cout<<"Size inside solve function "<<sizeof(arr)<<endl;

    cout<<"arr : "<<arr<<endl;
    cout<<"&arr "<<&arr<<endl;
       arr[0] = 50;
}

void update(int *p)
{
    cout<<"Adress stored inside p is "<<p<<endl;
    cout<<"Address of p is "<<&p<<endl;
    *p = *p+ 10;
}

int main()
{
    int arr[10] = {1,2,3,4};
    cout<<"size inside the function "<<sizeof(arr)<<endl;
 cout<<"arr : "<<arr<<endl;
    cout<<"&arr "<<&arr<<endl;

    //printing array inside main
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl<<endl<<"Now calling solve functtion"<<endl;

    solve(arr);

    cout<<"Wapas main function me aagye h "<<endl;

      for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

      cout<<endl;


int a = 5;
cout<<"Address of a is "<<&a<<endl;
int* ptr = &a;
cout<<"adress stored in ptr is  "<<ptr<<endl;
cout<<"address of pointer is "<<&ptr<<endl;
update(ptr);
cout<<"Value of a is "<<a<<endl;


}