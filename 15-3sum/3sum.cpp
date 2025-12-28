class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i,j,k;
        for(i=0; i<n-2; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j=i+1;
            k=n-1;
            while(j < k){
                if(nums[j] + nums[k] == -nums[i]){
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(nums[j] == nums[j-1] && j<n-1){
                        j++;
                    }
                    while(nums[k] == nums[k+1] && k>0){
                        k--;
                    }
                }
                else if(nums[j] + nums[k] > -nums[i]){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        return res;
    }
};