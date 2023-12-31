#include<iostream>
using namespace std;

void merge(int* arr,int s,int e){

    int mid = (s +e)/2;
    int len1 = mid -s +1;
    int len2 = e- mid;

    //assume ro create array for len1,len2 length
    int* left = new int[len1];
    int* right = new int[len2];


    //copy values
    int k = s;
    for(int i=0;i<len1;i++){
        left[i]  = arr[k];
        k++;
    }
     k = mid+1;
    for(int i=0;i<len2;i++){
        right[i]  = arr[k];
        k++;
    }

    //merge logic
    int leftindex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftindex <len1 && rightIndex < len2){
        if(left[leftindex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftindex];
            mainArrayIndex++;
            leftindex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }
    
    //copy  logic for left array
    while(leftindex < len1){
        arr[mainArrayIndex] = left[leftindex];
        mainArrayIndex++;
        leftindex++;
    }


    //copy  logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
     

     //TODO:: delete left and right array
}

void mergeSort(int* arr,int s,int e){

//base case
//s--e -> single element
//s>e -> invalid array

if(s>=e){
    return;
}

int mid = (s +e)/2;

//sort the left part of the array
mergeSort(arr,s,mid); 

//sort the right part of the array
mergeSort(arr,mid+1,e);

//merge two sort array
merge(arr,s,e);

}

int main(){
    int arr[100] = {4,2,13,2,12};
    int n =5;

    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}