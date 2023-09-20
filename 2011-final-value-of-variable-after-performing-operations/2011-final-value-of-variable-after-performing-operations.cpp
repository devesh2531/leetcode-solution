class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
       int a=0;
        for( auto i: o){
            if(i=="++X"||i=="X++")
                a++;
            else
                a--;
        }
        return a;
    }
};