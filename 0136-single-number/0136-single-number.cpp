class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();
    //    int ones=0;
    //    for(int i=0;i<n;i++){
    //     ones^=nums[i];
    //    } 
    //    return ones;

    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto elements:mp){
        if(elements.second==1){
            return elements.first;
        }
       
    }
     return -1;
    }
};