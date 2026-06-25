class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long long)m*k){
          return -1;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
      for(int i=0;i<bloomDay.size();i++){
       maxi=max(bloomDay[i],maxi);
       mini= min(bloomDay[i],mini);
      }
      int low=mini;
      int high=maxi;
      int ans=INT_MAX; 
      while(low<=high){
         int flag=0;
        int count=0;
        int mid= (low+high)/2;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count%k==0){
                    flag++;
                }
            }
            else{
                count=0;
            }
        }
        if(flag>=m){
            ans=min(mid,ans);
            high=mid-1;
        }
        if(flag<m){
            low= mid+1;
        }
      }
      return ans;
    }
};
