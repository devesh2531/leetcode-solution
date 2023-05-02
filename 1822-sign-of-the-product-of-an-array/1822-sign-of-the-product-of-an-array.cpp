class Solution {
public:
    int arraySign(vector<int>& a){
        int m=0;
        for(auto i:a){
            if(i==0)
                return 0;
           if(i<0)
               m++;
        }
        return m%2==0?1:-1;
    }
};