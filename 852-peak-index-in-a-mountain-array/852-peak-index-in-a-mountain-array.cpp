class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // vector<int> ans;
        // ans=arr;
        // sort(ans.begin(),ans.end());
        // int n=arr.size();
        // int s=ans[n-1];
        // for(int i=0;i<n;i++){
        //     if(s==arr[i])
        //         return i;
        // }
        // return -1;
        int e=arr.size()-1;
        int s=0;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return e;
    }
};