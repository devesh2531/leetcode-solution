class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> v{'a', 'e', 'i', 'o', 'u'};
        int c=0;
        for(int i=0;i<k;i++){
            c+=v.count(s[i]);
        }
        int a= c;
        for (int i = k; i < s.length(); i++){
            c+=v.count(s[i]) - v.count(s[i-k]);
            a=max(a,c);
        }
        return a;
    }
};