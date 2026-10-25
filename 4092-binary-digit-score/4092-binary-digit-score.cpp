
class Solution {
public:
    int calculateScore(int a, int b) {
        int c1 = __builtin_popcount(a);
        int c2 = __builtin_popcount(b);

        if (c1 >= c2) {
            return c1 * c2;
        }

        return c2 / c1;
    }
    // string s1 = "";
    // string s2="";

    // while (a > 0) {
    //     s1 = to_string(a % 2) + s1;
    //     a = a / 2;
    // }
    //  while (b > 0) {
    //     s2 = to_string(b % 2) + s2;
    //     b = b / 2;
    // }
    // int c1=0;
    // int c2=0;
    // for(int i=0;i<s1.size();i++){
    //     if(s1[i]=='1')
    //         c1++;   
    // }
    // for(int i=0;i<s2.size();i++){
    //     if(s2[i]=='1')
    //         c2++;
    // }
    // if(c1>=c2){
    //     return c1*c2;
    // }
    // return c2/c1;

    
};