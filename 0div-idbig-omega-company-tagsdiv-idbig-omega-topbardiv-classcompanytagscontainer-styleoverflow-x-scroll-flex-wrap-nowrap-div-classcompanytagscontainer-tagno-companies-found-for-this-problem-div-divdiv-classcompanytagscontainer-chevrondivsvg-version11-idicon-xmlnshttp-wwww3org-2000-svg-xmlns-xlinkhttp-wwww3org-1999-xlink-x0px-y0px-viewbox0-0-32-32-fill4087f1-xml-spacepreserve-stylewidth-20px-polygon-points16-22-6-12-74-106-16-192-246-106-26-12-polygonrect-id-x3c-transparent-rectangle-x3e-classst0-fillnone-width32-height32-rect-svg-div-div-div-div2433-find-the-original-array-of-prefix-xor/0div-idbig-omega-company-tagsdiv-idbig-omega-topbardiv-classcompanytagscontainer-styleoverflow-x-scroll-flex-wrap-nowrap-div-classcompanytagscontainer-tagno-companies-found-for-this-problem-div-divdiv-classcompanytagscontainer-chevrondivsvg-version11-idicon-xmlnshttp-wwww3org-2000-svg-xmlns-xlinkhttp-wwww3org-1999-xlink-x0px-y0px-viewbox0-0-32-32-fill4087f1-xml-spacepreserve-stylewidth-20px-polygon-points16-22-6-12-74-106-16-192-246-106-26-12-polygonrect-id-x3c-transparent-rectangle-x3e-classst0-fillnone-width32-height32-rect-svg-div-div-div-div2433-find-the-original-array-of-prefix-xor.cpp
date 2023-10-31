class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n= pref.size();
        vector<int> a;
        a.push_back(pref[0]);
        int j=0,p;
        for(auto i: pref){
            if(j>0)
            a.push_back(i^p);
            p=i;
            j++;
        }
        return a;
    }
};