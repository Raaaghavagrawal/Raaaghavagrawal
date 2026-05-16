class Solution {
public:
    int numberofbits(int n){
        return log2(n)+1;
    }
    int concatenatedBinary(int n) {
        long ans=0,MOD=1e9+7;
        for(int i=1;i<=n;i++){
            int len=numberofbits(i);
            ans=((ans<<len)%MOD+i)%MOD;
        }
        return ans;
    }
};