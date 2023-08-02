#include<bits/stdc++.h>
using  namespace std;
    void reverse(int* arr, int n){
        int i=0;
        int j = n-1;
        while(i<=j){// bcoz we want to reverse frst half with second half
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
            i++;
            j--;
        }
    }
    int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    reverse(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    }

