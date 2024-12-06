class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            if(nums[i]==nums[i+1])
            continue;
            else{
            ans=nums[i];
            break;
            }
        }
        return ans;
    }
};