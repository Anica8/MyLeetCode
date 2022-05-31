class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xo=0;
        for(int i=0;i<nums.size();i++){
            xo^=nums[i];
        }
        for(int i=1;i<=nums.size();i++){
            xo^=i;
        }
        return xo;
    }
};