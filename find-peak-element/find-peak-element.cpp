class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if((mid==0 || nums[mid]>=nums[mid-1] ) && (mid==n-1 || nums[mid]>=nums[mid+1]))
                return mid;
            if(mid>0 && nums[mid-1]>=nums[mid])
                h=mid-1;
            else
                l=mid+1;
            }
        return -1;
    }
};