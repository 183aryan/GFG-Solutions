//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for(auto it:nums) um[it]++;
        priority_queue<pair<int, int>> pq;
        for(auto it:um) pq.push({it.second, it.first});
        vector<int> v;
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends