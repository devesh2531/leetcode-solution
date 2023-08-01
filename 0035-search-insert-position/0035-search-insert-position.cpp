class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c=0;
        for(auto i:nums){
            if(i>=target)
                return c;
            c++;
        }
        return c;
    }
};