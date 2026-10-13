class Solution {
public:
    int N,M,K;
    int MOD=1e9+7;
    int t[51][51][101];
    int solve(int idx,int search,int maxso){
        if(idx==N){
            if(search==K)return 1;
            return 0;
        }
        if(t[idx][search][maxso]!=-1){
            return t[idx][search][maxso];
        }
         int result = 0;
        
        for(int i = 1; i <= M; i++) {
            
            if(i > maxso) {
                result = (result + solve(idx+1, search+1, i)) % MOD;
            } else {
                result = (result + solve(idx+1, search, maxso)) % MOD;
            }
            
        }
        
        return t[idx][search][maxso] = result % MOD;
        
    }
    

    int numOfArrays(int n, int m, int k) {
        N=n;
        M=m;
        K=k;
        memset(t,-1,sizeof(t));
         return solve(0,0,0);
    }
};