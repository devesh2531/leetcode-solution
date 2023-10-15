//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
   int f(int i,int j, string& s1, string& s2, vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]=1+f(i-1,j-1,s1,s2,dp);
        return dp[i][j] = max(f(i,j-1,s1,s2,dp) , f(i-1,j,s1,s2,dp));
    }
    int countMin(string str){
        int n=str.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        string rstr=str;
        reverse(rstr.begin(),rstr.end());
        return n-f(n-1,n-1,str,rstr, dp);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends