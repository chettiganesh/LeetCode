class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxt=max(count,maxt);
            }else{
                count=0;
            }
        }
      
        return maxt;
    }
};