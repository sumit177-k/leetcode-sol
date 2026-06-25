class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi=nums[i];
        }
       } 
     int low=1;
     int high=maxi;
     int ans=INT_MAX;
     while(low<=high){
        int count=0;
        int mid=(low+high)/2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
              count =count+nums[i]/mid;
            }
            else if(nums[i]%mid!=0){
                count=count+nums[i]/mid+1;
            }
        }
        if(count<=threshold){
                ans= min(mid,ans);
        }
        if(count>threshold){
            low= mid+1;
        }
        if(count<=threshold){
            high= mid-1;
        }
     }
     return ans;
    }
};
