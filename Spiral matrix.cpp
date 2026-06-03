class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>a;
        int el;
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0;
        int top=0;
        int right=m-1;
        int bottom=n-1;
      while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            el=matrix[top][i];
            a.push_back(el);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            el=matrix[i][right];
            a.push_back(el);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            el=matrix[bottom][i];
            a.push_back(el);
        }
        bottom--;
        }
        if(left<=right){
       for(int i=bottom;i>=top;i--){
            el=matrix[i][left];
            a.push_back(el);
        }
        left++;
      }
      }
      return a;
    }
};
