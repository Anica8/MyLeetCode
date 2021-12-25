class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        vector<int> mp;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                int mini=mid,maxi=mid;
                while(mid+1<n &&nums[mid]==nums[mid+1])
                {
                    mid++;
                    maxi=max(maxi,mid);
                    mini=min(mini,mid);
                    if(mid+1<n && nums[mid]!=nums[mid+1])
                        break;
                }
            
                    while(mid-1>=0 && nums[mid]==nums[mid-1])
                    {
                        mid--;
                        mini=min(mini,mid);
                        maxi=max(maxi,mid);
                        if(mid-1>=0 && nums[mid]!=nums[mid-1])
                            break;
                    }
                
                
                return {mini,maxi};
            }else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        
        return {-1,-1};
    }
};