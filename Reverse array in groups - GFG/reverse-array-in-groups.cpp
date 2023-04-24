//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        if (n == 0) return;

        int subArraySize{0};
        for (int i = 0; i < arr.size(); i++)
        {
            subArraySize++;
            if ( (subArraySize == k) || (i == arr.size()-1 ) )
            {
                int front_index = i;
                int back_index = i + 1 - subArraySize;
                subArraySize = 0;
                while (back_index < front_index)
                {
                    arr[back_index] = arr[back_index] + arr[front_index];
                    arr[front_index] = arr[back_index] - arr[front_index];
                    arr[back_index] = arr[back_index] - arr[front_index];
                    back_index++;
                    front_index--;
  }
            }
        }
    
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends