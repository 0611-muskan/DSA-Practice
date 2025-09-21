class Solution {
public:
    bool isPalindrome(int n) {
      int reverse=0;
      int original_num=n;
      while(n>0){
        int last_digit=n%10;
        reverse=reverse*10+last_digit;
        n/=10;
      }
      if(original_num==reverse)
       return true;
      else
       return false; 
    }
};