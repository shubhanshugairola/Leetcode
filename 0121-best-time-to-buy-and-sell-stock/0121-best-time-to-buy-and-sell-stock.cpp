class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxx=0;
      int minn=INT_MAX;
      int n=prices.size();
      for(int i=0;i<n;i++){
        minn=min(minn,prices[i]);
         maxx=max(maxx,prices[i]-minn);   
      }
      return maxx;
      
    }
};
