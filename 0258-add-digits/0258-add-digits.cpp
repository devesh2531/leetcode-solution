class Solution {
    int f(int n){
        int s=0;
       while(n>0){
           s+=n%10;
           n/=10;
       } 
    return s;
    }
public:
    int addDigits(int n) {
        while(n>9){
n=f(n);
        }
        return n;
    }
};