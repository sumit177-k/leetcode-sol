class Solution {
public:
void merge(vector<int>& nums,int low,int mid,int high){
vector<int> a;
int k=mid+1;
int l=low;
while(l<=mid && k<=high){
if(nums[l]<=nums[k]){
    a.push_back(nums[l]);
    l++;
}
else if(nums[l]>nums[k]){
    a.push_back(nums[k]);
    k++;
}
}
while(l<=mid){
    a.push_back(nums[l]);
    l++;
}
while(k<=high){
    a.push_back(nums[k]);
    k++;
}
for(int i=low;i<=high;i++){
    nums[i]=a[i-low];
}
}
void mergesort(vector<int>& nums,int low,int high){
    if(low>=high){
        return ;
    }
    int mid=low+(high-low)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);

    
 }
    vector<int> sortArray(vector<int>& nums) {
     mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
