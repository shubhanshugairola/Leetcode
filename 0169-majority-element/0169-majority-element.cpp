class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int cnt=0;
    int el;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
        int cn1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el)cn1++;
        }
        if(cn1>(n/2))return el;
    
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





    // approach 2
     // map<int,int>mp;
    // for(int i=0;i<nums.size();i++){
    //     mp[nums[i]]++;
    // }
    // for(auto i:mp){
    //     if(i.second>(nums.size()/2)){
    //         return i.first;
    //     }
    // }
    // return -1;