class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int del=0;
        int prev=-1;
        for(int x:nums){
            if(prev==x){
                del++;
            }
            else{
                prev=x;
            }
        }
        
        return del;
}
};