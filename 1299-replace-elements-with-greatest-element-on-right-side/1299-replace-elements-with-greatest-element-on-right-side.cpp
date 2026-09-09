class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int leader=-1;
        for(int i=n-1;i>=0;i--){
            int curren=arr[i];
            arr[i]=leader;
            leader=max(leader,curren);
        }
        return arr;
    }
};