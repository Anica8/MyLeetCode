class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> mp(nums.begin(),nums.end());
        
        nums.clear();
        for(auto i:mp)
            nums.push_back(i);
        return nums.size();
    }
};