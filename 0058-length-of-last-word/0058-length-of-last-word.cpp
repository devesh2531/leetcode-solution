class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.size();
        int ans=0;
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ')
                ;
            else{
                ans++;
                c=10;
            }
            if(s[i]==' '&&c==10)
                return ans;
        }
        return ans;
    }
};