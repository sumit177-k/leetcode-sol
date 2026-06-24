class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=0;
        int high=piles[piles.size()-1];
        int mini=INT_MAX;
        while(low<=high){
            int count=0;
          int mid= (low+high)/2;
          if(mid==0){
            return mini;
          }
          for(int i=0;i<piles.size();i++){
            if(piles[i]%mid==0){
              count=piles[i]/mid+count;
            }
            else{
                count=count+ piles[i]/mid+1;
            }
          }
          if(count<=h){
            mini=min(mid,mini);
          }
          if(count>h){
            low=mid+1;
          }
          else if(count<=h){
            high=mid-1;
          }
        }
        return mini;;
    }
};
