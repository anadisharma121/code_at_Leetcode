class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1 && idx == -1){
                idx = i;
                cout<<i;
            }
            else if(nums[i] == 1 && i - idx >= k + 1){
                idx = i;
                cout<<i;
            }
            else if(nums[i] == 1 && i - idx < k + 1){
                cout<<i;
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};