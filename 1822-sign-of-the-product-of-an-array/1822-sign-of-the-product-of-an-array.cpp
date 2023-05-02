class Solution {
public:
    int arraySign(vector<int>& a){
       int n= a.size();
        int m=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                return 0;
           if(a[i]<0)
               m++;
        }
        return m%2==0?1:-1;
    }
};