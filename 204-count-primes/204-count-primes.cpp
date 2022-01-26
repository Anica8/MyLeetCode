class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool> nums(n+1,true);
        nums[0]=false;
        nums[1]=false;
        
        for(int i=2;i<n;i++){
            if(nums[i]){count++;
            for(int j=2*i;j<n;j=j+i)
                nums[j]=0;
        }
        }
        
        return count;
    }
};