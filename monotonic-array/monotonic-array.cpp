class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int f1=0,f2=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
            {f1=1;
             break;}
        }
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j]<nums[j+1])
            {f2=1;
             break;}
        }
        if(f1==0 || f2==0)
            return true;
        else
            return false;
    }
};