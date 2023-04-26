//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& ar){
        // Write your code here.
        int i = 0, j;
        while(i < m && n > 0){
            if(ar[i] == 0 && ((i-1 < 0 || ar[i-1] == 0)
            && (i+1 >= m || ar[i+1] == 0))){
                n--;
                ar[i] = 1;
            }
            i++;
        }
        
        if(n){
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends