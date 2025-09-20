#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks:";
    cin>>marks;
    if (marks>=80)
     cout<<"Grade:A";
    else if(marks>=60)
     cout<<"Grade:B";
    else if(marks>=50)
     cout<<"Grade:C";
    else if(marks>=45)
     cout<<"Grade:D";
    else if(marks>=25)
     cout<<"Grade:E";
    else
     cout<<"Grade:F";
return 0;
}