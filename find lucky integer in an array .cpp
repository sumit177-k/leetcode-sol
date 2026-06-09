class Solution {
public:
    int findLucky(vector<int>& b) {
     vector<int>a(510,0);
     int idx=-1;
     for(int i=0;i<b.size();i++){
        a[b[i]]++;
     }
     for(int i=a.size()-1;i>0;i--){
        if(a[i]==i){
            idx=i;
          return idx;
        }
     }
     return -1;
    }
};
