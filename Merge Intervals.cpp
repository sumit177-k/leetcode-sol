class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>a;
        int s=0;
        while(s<intervals.size()){
            int low=s;
           int currend=intervals[s][1];
        while(low<intervals.size()-1&&currend>=intervals[low+1][0]  ){
            low++;
            currend=max(currend,intervals[low][1]);
        }
        vector<int>temp{intervals[s][0],currend};
        a.push_back(temp);
    s=low+1;
        
        }
        return a;
    }
};
