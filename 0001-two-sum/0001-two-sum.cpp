class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int> m;
       
        for(int i=0;i<n.size();i++){
            int c=t-n[i];
            if(m.count(c) )
                return {m[c],i};
            m[n[i]]=i; 
        }
         return {} ;
        
    }
    
};