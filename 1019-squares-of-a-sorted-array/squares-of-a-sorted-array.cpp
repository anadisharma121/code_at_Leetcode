class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int min = INT_MAX;
        int min_idx;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i]*nums[i];
            if(nums[i] < min){
                min = nums[i];
                min_idx = i;
            }
        }

        int ptr1 = min_idx;
        int ptr2 = min_idx + 1;
        while(ptr1 > -1 && ptr2 < nums.size()){
            if(nums[ptr1] < nums[ptr2]){
                res.push_back(nums[ptr1]);
                ptr1--;
            }
            else if(nums[ptr2] < nums[ptr1]){
                res.push_back(nums[ptr2]);
                ptr2++;
            }
            else{
                res.push_back(nums[ptr1]);
                res.push_back(nums[ptr2]);
                ptr1--;
                ptr2++;
            }
        }

        while(ptr1 > -1){
            res.push_back(nums[ptr1]);
            ptr1--;
        }

        while(ptr2 < nums.size()){
            res.push_back(nums[ptr2]);
            ptr2++;
        }

        return res;
    }
};