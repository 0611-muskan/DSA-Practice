#include<iostream>
using namespace std;
int main(){
    int num ,count=0;
    cout<<"enter a number:";
    cin>>num;
    while(num!=0){
        int digits=num%10;
        num/=10;
        count++;
    }
    cout<<"no. of digits in number:"<<count;
    return 0;
}