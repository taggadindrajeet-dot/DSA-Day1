#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int original;
    int sum = 0;
    int rem;
    cout<<"Enter numbers :";
    cin>>n;
    original = n;

    while(n>0){
        rem = n%10;     //Gives last digit of no.
        sum = sum + (rem*rem*rem);  //Add values
        n = n/10;       //Remove last digit from no.
    }
    if(original == sum){
        cout<<"Number is armstrong no.";
    }
    else{
        cout<<"Number is not armstrong no.";
    }
    return 0;
}