class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long long n, num=x, digit, rev = 0;

        while(true){
        if(num==0)
        break;
        digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        }
        if(rev==x)
        return true;
        return false;
    }
};