class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target) return mid;
            if(nums[h]==target) return h;
            if(nums[l]==target) return l; 
            
            if(nums[l]<nums[mid]){
                if(target>=nums[l] && target<nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            
            else
            {
                if(target>nums[mid] && target<=nums[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return -1;
    }
};