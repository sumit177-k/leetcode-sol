class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
  }
  for(int i=0 ;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
  }
       
    }
}; 

//approach 2
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       int temp;
     for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
         temp= matrix[i][j];
         matrix[i][j]=matrix[n-j-1][i];
         matrix[n-j-1][i]=matrix[n-1-i][n-j-1];
         matrix[n-1-i][n-j-1]=matrix[j][n-1-i];
         matrix[j][n-i-1]=temp;
        }
     }
    }
}; 
