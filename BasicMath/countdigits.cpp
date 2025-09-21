class Solution {
public:
    int countDigit(int n) {
  int i=0;
  while(n>0){
    i++;
    n=n/10;
  }
  return i;
    }
};