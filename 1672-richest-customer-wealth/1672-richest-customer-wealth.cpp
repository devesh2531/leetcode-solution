class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
        int m=0;
        for(auto i :a){
            int p=0;
            for(auto j:i){
                p+=j;
            }
            m= max(m,p);
            
        }
        return m;
    }
};