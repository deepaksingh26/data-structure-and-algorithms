// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       vector<pair<double,int>>temp;
       for(int i=0;i<n;i++)
       {
           double x=arr[i].value*1.0/arr[i].weight*1.0;
           temp.push_back({x,i});
       }
       sort(temp.begin(),temp.end());
       reverse(temp.begin(),temp.end());
       double ans=0,s=0;
      for(int i=0;i<n;i++)
       {
           if(s+arr[temp[i].second].weight<W)
           {
               s=s+arr[temp[i].second].weight;
               ans+=arr[temp[i].second].value;
           }
           else
           {   
               double x=W-s;
               ans+=temp[i].first*x;
               break;
           }
       }
       return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends