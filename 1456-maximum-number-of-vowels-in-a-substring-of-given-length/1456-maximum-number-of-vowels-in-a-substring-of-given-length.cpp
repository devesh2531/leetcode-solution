class Solution {
    bool isVowel(char c){
        return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
    }
public:
    int maxVowels(string s, int k) {
        int r=0,l=0,maxVowels=0,m=0;
        while(r<s.size()){
            if(r>=k){
                if(isVowel(s[l])) m--;
                l++;
            }
            if(isVowel(s[r])) m++;
            r++;
            maxVowels=max(maxVowels,min(k,m));
        }
        return maxVowels;
    }
};