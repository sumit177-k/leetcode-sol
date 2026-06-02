//approach 1(better)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
 int n=matrix.size();
 int m=matrix[0].size();
vector<int>row(n,0);
vector<int>col(m,0);
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
 }
 for(int i=0;i<n;i++){
    if(row[i]==1){
        for(int j=0;j<m;j++){
            matrix[i][j]=0;
        }
    }
 }
  for(int i=0;i<m;i++){
    if(col[i]==1){
        for(int j=0;j<n;j++){
            matrix[j][i]=0;
        }
    }
 }
    }
};

//approach 2 (optimal)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            if(j==0){
                col0=0;
            }
           else{
            matrix[0][j]=0;
           }
           matrix[i][0]=0;
        }
    }
 }
 for(int i=n-1;i>=0;i--){
    for(int j=m-1; j>0;j--){
        if(matrix[i][0]==0 || matrix[0][j]==0){
            matrix[i][j]=0;
        }
    }
 }
 if(col0==0){
    for(int i=n-1;i>=0;i--){
        matrix[i][0]=0;
    }
 }
    }
};
