class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=0;
        int sum=INT_MIN;
       for(int i=0;i<nums.size();i++){
         temp= temp+nums[i];
         if(temp>sum){
            sum=temp;
         }
          if(temp<0){
            temp=0;
         }
       } 

       return sum;

    }
};
