class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
            nums[i-1]=-111;

        }
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-111){
                s++;
            
            
            }
        }

        nums.erase(nums.begin() + 0,nums.begin()+s);

        return nums.size();
        

        
    }
};