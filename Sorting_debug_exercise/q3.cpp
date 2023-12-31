#include<iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];  // fix: swap with min element, not current element
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}




int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // /int x = 10;
     selectionSort(arr, n);
}