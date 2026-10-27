class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        int avai=target-nums[i];
        if(mp.find(avai)!=mp.end()){
            return {mp[avai],i};}
            mp[nums[i]]=i;
        
      }
      return {};
    }
};