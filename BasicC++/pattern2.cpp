#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
  
    cout<<"ENTER ROW THEN COLOMN:";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}