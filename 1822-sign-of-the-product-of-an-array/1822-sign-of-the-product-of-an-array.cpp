class Solution {
public:
    int arraySign(vector<int>& a){
       int n= a.size();
        int m=1;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                return 0;
            else if(a[i]>0){
                m*=1;
            }
            else
                m*=-1;
        }
        return m;
    }
};