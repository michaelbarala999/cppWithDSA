#include<bits/stdc++.h>
using namespace std;


 void seprate(int * arr, int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]==0)i++;
        else if (arr[j] == 1) j--;
        else{
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;

        }
    }
 }
 void print(int* arr, int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
 } 
int main(){
    int arr[] = {1,1,1,0,0,0,0,1,0,1,0};
    int n = sizeof(arr)/sizeof(int);
    seprate(arr,n);
    print(arr,n);
}