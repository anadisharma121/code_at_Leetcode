class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n;
        n=nums1.size();
        if(n%2!=0){
            return double(nums1[(0+n-1)/2]);
        }else{
            int mid1=(0+n-1)/2;
            int mid2 = mid1 +1;
            return (double(nums1[mid1] + nums1[mid2])/2);
        }

    }
};