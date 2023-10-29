class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_map<char,int> m;
        for(auto i: s){
            m[i]++;
        }
        long long ans=0;
        for(auto i: j){
            ans+=m[i];
        }
        return ans;
    }
};