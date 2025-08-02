#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>18){
        cout<<"You are adult so you can vote";
        return 0;
    }
    cout<<"You are teanager";
}