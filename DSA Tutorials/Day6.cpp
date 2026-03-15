#include<bits/stdc++.h>
using namespace std;

int main(){                     //check Array is sorted or not
    int arr[5] = {1,5,3,4,2};
    int count = 0;
    for(int i=0; i<4; i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count==0){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}