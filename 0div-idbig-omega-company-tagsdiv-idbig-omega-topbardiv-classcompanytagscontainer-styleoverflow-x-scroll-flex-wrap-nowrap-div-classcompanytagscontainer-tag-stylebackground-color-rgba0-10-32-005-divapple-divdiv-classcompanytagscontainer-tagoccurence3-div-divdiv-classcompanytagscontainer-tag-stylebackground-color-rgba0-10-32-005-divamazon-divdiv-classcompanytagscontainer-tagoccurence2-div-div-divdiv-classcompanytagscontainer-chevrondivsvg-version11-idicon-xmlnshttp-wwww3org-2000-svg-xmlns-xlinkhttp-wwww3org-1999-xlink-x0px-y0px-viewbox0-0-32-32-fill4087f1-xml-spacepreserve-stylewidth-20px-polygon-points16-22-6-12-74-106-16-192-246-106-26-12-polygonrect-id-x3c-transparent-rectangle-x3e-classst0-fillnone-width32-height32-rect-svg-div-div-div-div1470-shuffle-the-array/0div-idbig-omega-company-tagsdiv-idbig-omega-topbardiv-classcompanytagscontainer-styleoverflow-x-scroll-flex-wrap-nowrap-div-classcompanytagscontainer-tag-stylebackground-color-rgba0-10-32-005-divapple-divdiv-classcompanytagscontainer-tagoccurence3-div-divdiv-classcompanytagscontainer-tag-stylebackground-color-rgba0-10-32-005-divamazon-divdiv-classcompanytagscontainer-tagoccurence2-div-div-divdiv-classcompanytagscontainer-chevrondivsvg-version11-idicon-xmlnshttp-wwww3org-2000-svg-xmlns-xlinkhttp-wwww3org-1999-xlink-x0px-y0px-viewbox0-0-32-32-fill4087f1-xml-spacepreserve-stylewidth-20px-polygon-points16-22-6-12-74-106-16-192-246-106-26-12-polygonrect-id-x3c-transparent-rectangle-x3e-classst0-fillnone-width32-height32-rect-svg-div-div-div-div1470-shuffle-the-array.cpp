class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
       int p=nums.size();
        for(int i=0;i<(p-n);i++){
            a.push_back(nums[i]);
              a.push_back(nums[i+n]);
        }
        return a;
    }
};