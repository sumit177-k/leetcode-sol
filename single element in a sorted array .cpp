class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(mid==0){
                return nums[mid];
            }
          if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
          }
          else if(nums[mid+1]!=nums[mid]){
            if((high-mid)%2==0){
                high=mid;
            }
            else{
            low=mid+1;
            }
          }
          else if(nums[mid]==nums[mid+1]){
            if((high-mid+1)%2==0){
                high=mid-1;
            }
            else {
              low=mid;
            }
          }
        }
        return nums[low];
    }
};
