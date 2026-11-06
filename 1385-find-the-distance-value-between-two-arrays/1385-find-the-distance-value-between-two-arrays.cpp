class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d) {
        int n=a.size();
        int m=b.size();
       
        int c=0;
        for(int i=0;i<n;i++){
             bool ans=true;
            int j=0;
            while(j<m){
           if(abs(a[i]-b[j]) <= d){
              ans=false;

           }
           j++;
           
        }
        if(ans)c++;

        }
        return c;
    }
};