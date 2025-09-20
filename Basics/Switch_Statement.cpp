#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter a day no.:";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Day:Sunday";
        break;
    case 2:
        cout<<"Day:Monday";
        break;
    case 3:
        cout<<"Day:Tuesday";
        break;
    case 4:
        cout<<"Day:Wednesday";
        break;
    case 5:
        cout<<"Day:Thursday";
        break;
    case 6:
        cout<<"Day:Friday";
        break;
    case 7:
        cout<<"Day:Saturday";
        break;
    default:
    cout<<"enter a valid no. between 1 to 7";
        break;
    }
}