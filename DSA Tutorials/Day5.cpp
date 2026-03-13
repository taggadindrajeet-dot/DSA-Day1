#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] != arr[i+1]){
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j]=arr[n-1];
    cout<<"After remove duplicate values :";
    for(int i=0; i<=j; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}