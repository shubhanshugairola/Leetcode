class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.second>(nums.size()/2)){
            return i.first;
        }
    }
    return -1;
    }
};
//     int n=nums.size();
    //     int p=n/2;
    //    int cnt;

    //     for(int i=0;i<n;i++){
    //         cnt=0;
    //         for(int j=0;j<n;j++){
    //             if(nums[i]==nums[j])
    //             cnt++;
    //         }
    //         if(cnt>p)return nums[i];
    //     }
    //     return -1;

    // }