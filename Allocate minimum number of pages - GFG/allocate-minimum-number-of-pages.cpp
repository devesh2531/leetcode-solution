//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
      bool isPossibleSolution(int N, int M, int A[], int sol) {
        int pageSum = 0;
        int allocation = 1;

        for (int i = 0; i < N; i++) {
            // allocate book pages agar jayada ho sol se
            if (A[i] > sol) {
                return false;
            }
            //no of pages is greater than sol
            if (pageSum + A[i] > sol) {
                allocation++;
                pageSum = A[i];
                
                if (allocation > M) {
                    return false;
                }
            } else {
                pageSum += A[i];
            }
        }
        return true;
    }

    int findPages(int A[], int N, int M) {
        if (M > N) {
            return -1;
        }
        int s = 0;
        int e = accumulate(A, A + N, 0);
        int ans = -1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (isPossibleSolution(N, M, A, mid)) {
                ans = mid; 
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends