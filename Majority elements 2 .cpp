// approach 1 with constant space complexity
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>a;
     int cnt1=0;
     int cnt2=0;
     int el1;
     int el2;
     for(int i=0;i<nums.size();i++){
        if(cnt1==0 && el2!=nums[i]){
            el1=nums[i];
             cnt1++;
        }
      else if(cnt2==0 && el1!=nums[i]){
         el2=nums[i];
         cnt2++;
      }
      else if(nums[i]==el1){
        cnt1++;
      }
      else if(nums[i]==el2){
        cnt2++;
      }
      else{
        cnt1--;
        cnt2--;
      }
      
     }
     int flag1=0; int flag2=0;
     int d=nums.size()/3;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==el1){
            flag1++;
        }
        else if(nums[i]==el2){
            flag2++;
        }
     }
     if(flag1>d){
        a.push_back(el1);
     }
     if(flag2>d){
        a.push_back(el2);
     }
     return a;
    }
};
// approach 2 with O(n) space complexity
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> mpp;
       vector<int>a;
       for(int i=0;i<nums.size();i++){
        int k=nums[i];
          if(mpp.find(k)!=mpp.end()){
            mpp[nums[i]]++;
          }
          else{
          mpp[nums[i]]=1;
          }
       } 
       for(auto x:mpp){
         if(x.second>nums.size()/3){
            a.push_back(x.first);
         }
       }
       return a;
    }
};
