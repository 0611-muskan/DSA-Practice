#include<math.h>
class Solution{
public:
    bool isArmstrong(int n) {
int original_num=n;
int digits=0;
int sum=0;
while(n>0){
    digits++;
    n/=10;
}
n=original_num;
while(n>0){
    int last_digit=n%10;
    sum+=pow(last_digit,digits);
    n/=10;
}
return original_num==sum;
    }

};

