//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
       bool check(string str)

    {

        int i =0;

        int j = str.length()-1;

        while(i<j)

        {

            if(str[i]!=str[j])

            {

                return false;

            }

            i+=1;

            j-=1;

        }

        return true;

    }

    bool palindromepair(int N, string arr[]) {

        // code here

        if(N==1)

        return false;

        unordered_map<string,int> mp;

        

        for(int i =0;i<N;i++)

        {

            mp[arr[i]] = i;

        }

        

        for(int i =0;i<N;i++)

        {

            string str= arr[i];

            

            for(int j = 1;j<=str.length();j++)

            {

                string s1 = str.substr(0,j);

                string r1 = s1;

                reverse(r1.begin(),r1.end());

                if(mp.find(r1)!=mp.end())

                {

                    string s = arr[mp[r1]];

                    string f = str+s;

                    if(check(f) and i!=mp[r1]){

                    // cout<<f<<endl;

                    return true;

                        

                    }

                }

            }

            string r1 = str;

            reverse(r1.begin(),r1.end());

            for(int j = 1;j<=str.length();j++)

            {

                string s1 = r1.substr(0,j);

                

                if(mp.find(s1)!=mp.end())

                {

                    string s = arr[mp[s1]];

                    string f = s+str;

                    // cout<<i<<" "<<j<<" "<<s1<<" "<<s<<" "<<str<<endl;

                    if(check(f) and i!=mp[r1]){

                    // cout<<f<<endl;

                    return true;

                        

                    }

                }

            }

            

        }

        

        return false;

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends