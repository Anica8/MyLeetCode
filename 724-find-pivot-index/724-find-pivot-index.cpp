class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(curr==(sum-curr-nums[i])) return i;
            curr+=nums[i];
        }
        
        return -1;
    }
};