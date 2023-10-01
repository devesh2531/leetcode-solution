class Solution {
public:
    int minPartitions(string n) {
        int a= 0;
        for(auto i: n){
            if((i-'0')>a)
                a=i-'0';
        }
        return a;
        
    }
};