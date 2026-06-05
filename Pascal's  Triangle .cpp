class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for(int i=0;i<numRows;i++){
            a.push_back(vector<int>());
            for(int j=0;j<=i;j++){
                if(i==0 || j==0 || j==i){
                    a[i].push_back(1);
                }
                else{
                    a[i].push_back(a[i-1][j-1]+ a[i-1][j]);
                }
            }
        }
        return a;
    }
};
