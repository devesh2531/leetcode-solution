class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i: nums){
m[i]++;}
        long long a=0;
        for(auto i: m){
            if(i.second>1){
                a+=((i.second-1)*i.second)/2;
            }
        }
        return a;
    }
};