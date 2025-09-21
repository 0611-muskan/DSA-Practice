class Solution {
public:
    int reverseNumber(int n) {
     int last_digit=0, reversed=0;
     while(n>0){
        last_digit=n%10;
        reversed=reversed*10+last_digit;
        n/=10;
     }
     return reversed;
    }
};