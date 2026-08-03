class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-x),arr[i]});
               if(pq.size()>k){
            pq.pop();
        }
        }
     vector<int> ans;

        while(pq.size()!=0){
            pair<int,int> p =pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};