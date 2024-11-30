class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int rem;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)
            nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
            else
            continue;
        }
        rem = nums.size();
        return rem;
    }
};