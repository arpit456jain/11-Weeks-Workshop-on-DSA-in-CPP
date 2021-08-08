// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        // T.C : O(n)
        // logis is i will take a window from 0 and will add elements to it until sum>=s if its graeter than s then i will remov efirst element
        vector<int>res;
        int sumOfwindow = 0;
        
        int j=0;
        int i=0;
        while(j<=n)
        {
            if(sumOfwindow==s)
                break;
            if(sumOfwindow<s)
            {
                sumOfwindow += arr[j];
                j++;
                continue;
            }
            else{
                sumOfwindow = sumOfwindow - arr[i];
                i++;
                continue;
            }
            
        }
        
        cout<<"i is"<<i<<" and j is"<<j<<"and sum is"<<s<<"and sumOfwindow is"<<sumOfwindow<<endl;
        if(sumOfwindow==s)
        {
            res.push_back(i+1);
            res.push_back(j-1);
        }
        else{
            res.push_back(-1);
        }
        return res;
    
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends