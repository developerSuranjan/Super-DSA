class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums) mp[x]++;
        priority_queue<pair<int,int>> pq;
        for(auto x:mp){
            pq.push(make_pair(x.second,x.first));
        }
        vector<int> ans;
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};