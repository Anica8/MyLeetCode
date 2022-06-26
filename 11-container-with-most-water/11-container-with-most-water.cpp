class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        
        long long maxi=0;
        while(i<=j){
            int m=min(height[i],height[j]);
            long long area=(j-i) * m;
            maxi=max(maxi,area);
            
            if(height[i]<height[j])
                i++;
            else 
                j--;
        }
        
        return maxi;
}
};