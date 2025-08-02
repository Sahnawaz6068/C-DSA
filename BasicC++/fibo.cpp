#include <iostream>
using namespace std;

int main(){
    int a=0;//first digit
    int b=1;//second digit
    int c;//current digit
    for(int i=1;i<10;i++){
        c=a+b;
        cout<<c;
        cout<<endl;
        a=b;
        b=c;
    }
}