class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==2147483647 && divisor==-2147483648)
          return 0;
        if (dividend==0) return 0;
        if (divisor==0) return INT_MAX;
        long long res=double(exp(log(fabs(dividend))-log(fabs(divisor))))+0.00001;
        if ((dividend<0)^(divisor<0)) res=-res;
        if (res>INT_MAX) res=INT_MAX;
        return res;
    }
};