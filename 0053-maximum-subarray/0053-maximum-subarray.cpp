class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};