// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool cycle(vector<int>&vis,vector<int>&visDFS,int i,vector<int>adj[])
  {
      vis[i]=1;
      visDFS[i]=1;
      for(auto it: adj[i])
      {
          if(vis[it]==0)
          {
              if(cycle(vis,visDFS,it,adj))
              {
                  return true;
              }
          }
          else if(visDFS[it])
          return true;
      }
      visDFS[i]=0;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>visDFS(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                if(cycle(vis,visDFS,i,adj))
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends