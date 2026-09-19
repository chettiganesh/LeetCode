class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mis=0;
        for(int n=0;n<nums.size()+1;n++){
            mis^=n;
        }   
        for(int i=0;i<nums.size();i++){
            mis^=nums[i];
        }
        return mis;
     }
};