class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,curr=0;  //kadane's algo
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                curr=0;
            }else{
                curr++;
                res=max(curr,res);
            }
            
        }
        return res;
    }
};