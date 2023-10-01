class Solution {
public:
    string defangIPaddr(string a) {
        string s;
        for(auto i:a){
            if(i=='.')
                s+="[.]";
                else
                    s.push_back(i);
        }
        return s;
    }
};