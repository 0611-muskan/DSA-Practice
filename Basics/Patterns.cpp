#include<iostream>
using namespace std;
void print1(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void print2(){
    cout<<endl;
   for(int i=0;i<4;i++){
       for(int j=0;j<=i;j++){
         cout<<"*";
        }
        cout<<"\n";
    }
}
void print3(){
    cout<<endl;
    for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
         cout<<j+1;
        }
        cout<<"\n";
    } 
}
void print4(){
    cout<<endl;
    for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
         cout<<i+1;
        }
        cout<<"\n";
    } 
}
void print5(){
    cout<<endl;
    for(int i=0;i<5;i++){
       for(int j=0;j<5-i;j++){
         cout<<"*";
        }
        cout<<"\n";
    } 
}
void print6(){
    cout<<endl;
    for(int i=0;i<5;i++){
       for(int j=0;j<5-i;j++){
         cout<<j+1;
        }
        cout<<"\n";
    } 
}
void print7(int rows){
    cout<<endl;
    for(int i=0;i<rows;i++){
       for(int j=0;j<rows-i-1;j++){
        cout<<" ";
       }
       for(int k=0;k<2*i+1;k++){
        cout<<"*";
       }
       for(int l=0;l<rows-i-1;l++){
        cout<<" ";
       }
       cout<<endl;
    }
}
void print8(int rows){
    cout<<endl;
    for(int i=0;i<rows;i++){
       for(int j=0;j<i;j++){
        cout<<" ";
       }
       for(int k=0;k<2*rows-(2*i+1);k++){
        cout<<"*";
       }
       for(int l=0;l<i;l++){
        cout<<" ";
       }
       cout<<endl;
    }
}
int main(){
    print1();
    print2();
    print3();
    print4();
    print5();
    print6();
    print7(4);
    print8(4);
    
    return 0;
}