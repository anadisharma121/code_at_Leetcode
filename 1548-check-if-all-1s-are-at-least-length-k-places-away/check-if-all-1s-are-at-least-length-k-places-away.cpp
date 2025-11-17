class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1 && idx == -1){
                idx = i;
            }
            else if(nums[i] == 1 && i - idx >= k + 1){
                idx = i;
            }
            else if(nums[i] == 1 && i - idx < k + 1){
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};