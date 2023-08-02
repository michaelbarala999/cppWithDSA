#include <bits/stdc++.h>
using namespace std;
 
 void duplicate(int* arr, int size){
    for(int i=0; i<size;i++){
        for(int j =i+1; j<size-1;j++){
            if(arr[i]== arr[j]){
                cout<<" duplicate element "<<arr[i]<<endl;
            }
        }
    }
 }
 
int main(){
    int arr[] = {2,5,6,7,8,45,6,7,8,2,13,34,76,89,90,13};
    int size = sizeof(arr)/sizeof(int);
    duplicate(arr,size);
}