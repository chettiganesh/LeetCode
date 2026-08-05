class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     //used unordered map because take complexity o(1) 
     //if we use map take insert complexity o)log n
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
        int rem = target-nums[i];
         if (mp.find(rem) != mp.end()) {
             return {mp[rem], i};
        }
           mp[nums[i]] = i;
        }

        return {};

       
    }
};