#include<bits/stdc++.h>
using namespace std;

int  main(){
    int arr[6] = {10,60,30,40,20};
    
    int largest = arr[0];

    for(int i = 0; i<5; i++){
        if(arr[i]>largest){
        largest = arr[i];
        }
    }
    cout<<"Largest element :"<<largest<<endl;
 }