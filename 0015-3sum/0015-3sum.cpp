class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n =nums.size();
       sort(nums.begin(),nums.end());
       set<vector<int>> st;
       for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            if(nums[i]+nums[low]+nums[high]==0){
                st.insert({nums[i],nums[low],nums[high]});
                high--;
                low++;
            }else if(nums[i]+nums[low]+nums[high]>0){
                high--;
            }else{
                low++;
            }
        }
       }
       return vector<vector<int>>(st.begin(),st.end());
    }
};