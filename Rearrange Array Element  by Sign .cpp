class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
  vector<int>a;
  for(int i=0;i<nums.size();i++){
    int el;
    el=nums[i];
    a.push_back(el);
  }
  int *p=&nums[0];
  int *n=&nums[0]+1;
  for(int i=0;i<nums.size();i++){
    if(a[i]>=0){
        *p=a[i];
        p=p+2;
    }
    else if(a[i]<0){
        *n=a[i];
        n=n+2;
    }

  }
  return nums;
    }
};
