//Write a program to print the first 10 odd natural numbers in reverse order.
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=20;i>0;i--){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}