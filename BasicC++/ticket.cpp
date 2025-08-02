#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age<=12){
        cout<<"You are under age so you got discount of 65%";
    }
    else{
        cout<<"sorry there is no any discount for you";
    }
}