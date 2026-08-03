class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto fe:freq){
            pq.push({fe.second,fe.first});
        }
        vector<int> ans;
        while(k--){
            int top = pq.top().second;
            pq.pop();
            ans.push_back(top);
        }
       return ans;

    }
};