#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //step 1 : choose pivot element
    int pivotIndex= s;
    int pivotelement = arr[s];

    //step 2:find right position for pivot element and placed it their
    int count =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<= pivotelement){
            count++;
        }
    }

    //jab mein loop se bhr aaya ,toh mere pass pivot ki right psotion ready hai
    int rightIndex= s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex = rightIndex;



    //step3: left me chote anf right me bade
    int i =s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotelement){
            i++;
        }
        while(arr[j]>pivotelement){
            j--;
        }

        //2 case ho sakte hai
        //A-> you found the element to swap
        //B-> no need to swap

        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i],arr[j]);
    }
    return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }

    //partition logic,return pivot element
    int p =partition(arr,s,e);

    //recurrsive call
    //left
    quickSort(arr,s,p-1);

    //right
    quickSort(arr,p+1,e);
}


int main()
{
    int arr[] = {8,1,1,4,28,50,30};
    int n =7;


    int s =0;
    int e = n-1;
    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}