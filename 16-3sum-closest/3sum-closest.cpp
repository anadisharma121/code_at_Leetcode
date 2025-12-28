class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res_sum;
        int min_diff = INT_MAX;
        for(int i=0; i < n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j < k){
                int total = nums[i] + nums[j] + nums[k];
                int curr_diff = abs(target - total);

                if(curr_diff < min_diff){
                    min_diff = curr_diff;
                    res_sum = total;
                }

                if(total == target){
                    return res_sum;
                }
                else if(total > target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        return res_sum;
    }
};