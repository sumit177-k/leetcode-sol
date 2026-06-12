//optimal approach
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]=digits[i]+1;
            return digits;
        }
        digits[i]=0;
     }
     digits.insert(digits.begin(),1);
      return digits;
    }
};

//approach 2 (better approach)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>a;
       int n=digits.size()-1;
        if(digits[n]<9){
            digits[n]=digits[n]+1;
            a.insert(a.end(),digits.begin(),digits.end());
            return a;
        }
      else if(digits[n]==9){
        int k=n;
        while(digits[k]==9){
            k--;
            if(k<0){
                break;
            }
        }
        if(k<0){
         a.push_back(1);
         a.insert(a.begin()+1,n+1,0);
         return a;
        }
        else if(k>=0){
            digits[k]=digits[k]+1;
            a.insert(a.end(),digits.begin(),digits.begin()+k+1);
            a.insert(a.end(),n-k,0);
            return a;
        }
      }
      return a;
    }
};
