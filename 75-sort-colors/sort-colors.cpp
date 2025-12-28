class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low, mid, high;
        low = 0;
        mid = 0;
        high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else{
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
        }
    }
};


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();

//         int i=0; // denotes 0
//         int j=0; // denotes 1
//         int k=n-1; // denotes 2

//         while(j <= k){
//             if(nums[j] == 1){
//                 j++;
//             }else if(nums[j] == 2){
//                 swap(nums[j] , nums[k]);
//                 k--;
//             }else{
//                 swap(nums[j] , nums[i]);
//                 i++;
//                 j++;
//             }
//         }
//     }
// };