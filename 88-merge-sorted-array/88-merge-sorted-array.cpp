class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0 && n==0) return;
        if(m==0) {nums1=nums2;
                  return;}
        if(n==0) {
            return ;
        }
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
    }
};