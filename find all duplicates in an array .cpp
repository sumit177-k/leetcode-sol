//method 1
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>a;
      for(int i=0;i<nums.size();i++){
        if(nums[abs(nums[i])-1]<0) {
            a.push_back(abs(nums[i]));
        }
        else{
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
    }
    return a;
    }
};
//method 2
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int>a;
   while(i<nums.size()){
    if(nums[i]!=nums[nums[i]-1]){
          swap(nums[i],nums[nums[i]-1]);
          }
         else{
            i++;
         }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=i+1){
                    a.push_back(nums[i]);
                }
            }
   return a;
    }
};
