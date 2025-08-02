#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<endl<<"Enter second number";
    cin>>b;
    if(a==b) {
        cout<<"Both are equal";
        return 0;
    } 
    if(a>b){
        cout<<"A is greater than B";
    }else{
        cout<<"A is less then b";
    }
}