// #include<iostream>
// using namespace std;

// int main(){
//     int i,j;
//     int s=0;
//     for(j=1;j<=5;j++){
        
//         for(i=1;i<=4;i++){
            
//             s=s+1;
//             cout<<s<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int i,j;
//     for(j=1;j<=5;j++){
//          char name='a'+j-1;
//         for(i=1;i<=4;i++){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(j=1;j<=5;j++){
        for(i=1;i<=4;i++){
            cout<<5-i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    Output
4 3 2 1 
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
// #include<iostream>
// using namespace std;

// int main(){
//     char num='A';
//   int row,col;
//   for (row=1;row<=5;row++){
//     for(col=1;col<=5-row;col++){
//         cout<<" ";
//     }
//     for(num='A';num<='A'+row-1;num++){
//         cout<<num;
//     }
//     cout<<endl;
//   }
//     return 0;
// }

// Pyramid Star
#include<iostream>
using namespace std;

int main(){
    char num='A';
  int row,col;
  for (row=1;row<=5;row++){
    for(col=1;col<=5-row;col++){
        cout<<" ";
    }
    for(col=1;col<=2*row-1;col++){
      cout<<"*";  
    }
    cout<<endl;
  }
    return 0;
}