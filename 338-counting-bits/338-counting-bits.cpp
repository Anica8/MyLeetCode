class Solution {
public:
//     int countSetBits(int n)
//     {
//     if (n == 0)
//         return 0;
//     else
//         return (n & 1) + countSetBits(n >> 1);
//     }
//     vector<int> countBits(int n) {
//         vector<int> ans;
//         for(int i=0;i<=n;i++){
         
//          ans.push_back(countSetBits(i));
//         }   
//         return ans; 
//     }
    int countb(int n){
        int count=0;
        while(n!=0){
            if(n&1==1)
                count+=1;
            n=n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            if(i%2!=0) ans.push_back(ans[i-1]+1);
            else
            ans.push_back(countb(i));
        }
        return ans;
    }
};