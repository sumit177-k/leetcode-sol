class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int temp;
        int flag;
for(int i=nums.size()-1;i>0;i--){
    if(nums[i]>nums[i-1]){
        idx=i-1;
        temp =nums[i-1];
        flag=nums[i];
        break;
    }
}
if(idx!=-1){
int idx2=-1;
for(int i=idx+1;i<nums.size();i++){
    if(nums[i]>temp && nums[i]<=flag){
        flag=nums[i];
        idx2=i;
    }
 
}
swap(nums[idx],nums[idx2]);
reverse(nums.begin()+idx+1,nums.end());
}
else if(idx==-1){
    reverse(nums.begin(),nums.end());
}
return;
 }
};
