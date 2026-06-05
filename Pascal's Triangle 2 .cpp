//approach 1 
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> a;
        vector<int>b;
        for(int i=0;i<=rowIndex;i++){
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
     for(int i=0;i<rowIndex+1;i++){
        b.push_back(a[rowIndex][i]);
     }
       return b;
    }
};

//approach 2
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>a;
      long long val=1;
      a.push_back(val);
      for(int i=0;i<rowIndex;i++){
        val=val*(rowIndex-i);
        val=val/(i+1);
        a.push_back(val);
      }
      return a;
    }
};

//approach 3 but it runs only for rowIndex<=12 above 12 it gives error because factorial of 13 or above it goes out of bound for int
class Solution {
public:
int value(int n){
    
    if(n==1 ||n==0){
        return 1;
    }
      return n*value(n-1);
}

    vector<int> getRow(int rowIndex) {
        vector<int>a;
      int n=value(rowIndex);
      for(int i=0;i<rowIndex+1;i++){
      int r=value(i);
        int nr = value(rowIndex-i);
        a.push_back(n/(r*nr));
      }

   return a;
    }
};
