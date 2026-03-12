#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;

    cout<<"Enter number :";
    cin>>n;
    

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }

    if(n<=1){
        cout<<"Number is not prime";
    }

    if(count == 2){
        cout<<"Number is prime";
    }
    else if(count>2){
        cout<<"Number is not prime";
    }
    return 0;
}