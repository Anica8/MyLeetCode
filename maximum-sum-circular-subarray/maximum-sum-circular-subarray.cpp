class Solution {
public:
    int normalMax(vector<int>& nums){
        int res=nums[0],sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            res=max(res,sum);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_norm=normalMax(nums);
        if(max_norm<0)
            return max_norm;
        int max_tot=0;
        for(int i=0;i<nums.size();i++){
            max_tot+=nums[i];
            nums[i]=-nums[i];
        }
        int max_circ=max_tot+normalMax(nums);
        return max(max_circ,max_norm);
    }
};