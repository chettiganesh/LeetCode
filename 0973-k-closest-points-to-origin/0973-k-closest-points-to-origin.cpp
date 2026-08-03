class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int, vector<int>>>>pq;

        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int distance = x*x+y*y;
            pq.push({distance,points[i]});
        }

        vector<vector<int>> res;
        while(k--){
            auto top = pq.top().second;
            pq.pop();
            res.push_back(top);

        }
        return res;
        
    }
};