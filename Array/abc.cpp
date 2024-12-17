//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        int hash[10000]={0};
        int indexSum[10000]={0};
        //yha mera hash array to bta rha hai ki kaun kitna no of times hai but ans kaun hai woh bhi bta rha hai
        for(int i=0;i<n;i++){
            hash[a[i]]+=1;
        }
        //humko index sum calculate karna hoga
        for(int i=0;i<n;i++){
            indexSum[a[i]]=indexSum[a[i]]+i;
        }
    
    
        int ans=(-1);
        for(int i=0;i<n;i++){
            int indSum=0;
        
            int indMin = INT_MAX;
            if(hash[i]>=k){
                //yaha se i=4,7
                indSum=indSum+indexSum[i];
                if(indSum<indMin){
                        indMin = indSum;
                    ans=i;
                }
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends