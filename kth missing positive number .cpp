class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
     int low=0;int high=nums.size()-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]-mid-1>=k){
            high=mid-1;
        }
        else if(nums[mid]-mid-1<k){
            low=mid+1;
        }
      }
      return low+k;
  
    }
};
