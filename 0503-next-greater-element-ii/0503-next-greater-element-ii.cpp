class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int> st;
       for(int i=2*nums.size()-1;i>=0;i--){
        int current = i%nums.size();
        int val = nums[current];
        while(!st.empty()&&st.top()<=val){
            st.pop();
        }
        if(i<nums.size()){
            nums[current]=st.empty()?-1:st.top();
        }
        st.push(val);
       }
       return nums;
    }
};