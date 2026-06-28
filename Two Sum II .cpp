class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int f1=0,f2=numbers.size()-1;
     while(f1<f2){
        int sum=numbers[f1]+numbers[f2];
        if(sum==target){
            return {f1+1,f2+1};
        }
        else if(sum>target){
            f2--;
        }
        else if(sum<target){
            f1++;
        }
     }
     return {-1,-1};
    }
};
