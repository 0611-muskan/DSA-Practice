#include<iostream>
using namespace std;
int main(){
    int n, a=0,b=1;
    cout<<"enter no. of terms to print in fibonacci series:";
    cin>>n;
    for(int i=2;i<=n;i++){
        cout<<" "<<a ;
        int c=a+b;
        a=b;
        b=c;
    }
    return 0;
}