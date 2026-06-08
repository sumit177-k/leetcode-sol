class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       int j;
       for(int i=0;i<nums.size();i++){
        if(mpp.find(nums[i])!=mpp.end()){
            j= i-mpp[nums[i]];
            if(j<=k){
                return true;
            }
              else{
                mpp[nums[i]]=i;
            }
        }
        else{
            mpp[nums[i]]=i;
        }

       }
       return false;
    }
};
