class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i: nums1){
            mp[i]++;
        }
        
        for(int j: nums2){
            if(mp[j] > 0){
                ans.push_back(j);
                mp[j]--;
            }
        }
        return ans;
    }
};