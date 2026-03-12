#include<bits/stdc++.h>
using namespace std;

void Ispalindrome(int x){       //Palindrome
    int rem, rev=0, original;

    original = x;
    while(x!=0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x/10;
    }

    if(original == rev){
        cout<<"Enter no. is palindrome"<<endl;
    }
    else{
       cout<<"Enter no. is not palindrome"<<endl; 
    }
}

int main(){
    int n;
    cout<<"Enter no. :";
    cin>>n;
    Ispalindrome(n);
}