//Write a program to print the first 10 even natural numbers
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}