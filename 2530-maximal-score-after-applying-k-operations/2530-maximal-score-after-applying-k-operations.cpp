class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int> pq(begin(nums),end(nums));
      while(k--){
        int max=pq.top();
        pq.pop();
        int c=ceil(max/3.0);
        sum+=max;
        pq.push(c);
      }
        return sum;
    }
};