/*
#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"ENTER ROW THEN COLOMN:";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"4 ";
        }
        cout<<endl;
    }
}
ENTER ROW THEN COLOMN:5 6
4 4 4 4 4 4 
4 4 4 4 4 4
4 4 4 4 4 4
4 4 4 4 4 4
4 4 4 4 4 4
*/

/*
#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"ENTER ROW THEN COLOMN:";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<j*j<<"  ";
        }
        cout<<endl;
    }
}
ENTER ROW THEN COLOMN:5 6
1  4  9  16  25  36  
1  4  9  16  25  36
1  4  9  16  25  36
1  4  9  16  25  36
1  4  9  16  25  36
*/

#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
  
    cout<<"ENTER ROW THEN COLOMN:";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
          char name='F';
        for(int j=1;j<=col;j++){
            cout<<name<<"  ";
            name=name+1;
        }
        cout<<endl;
    }
}

/*
ENTER ROW THEN COLOMN:5 6
F  G  H  I  J  K  
F  G  H  I  J  K
F  G  H  I  J  K
F  G  H  I  J  K
F  G  H  I  J  K*/