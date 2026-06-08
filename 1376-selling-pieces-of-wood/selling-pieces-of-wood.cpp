class Solution {
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        long long int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int x=0;x<prices.size();x++){
            dp[prices[x][0]][prices[x][1]]=prices[x][2];
        }
        for(int x=1;x<=m;x++){
            for(int y=1;y<=n;y++){
                for(int z=1;z<=x/2;z++){
                    dp[x][y]=max(dp[x][y],(dp[z][y]+dp[x-z][y]));
                }
                for(int z=1;z<=y/2;z++){
                    dp[x][y]=max(dp[x][y],(dp[x][z]+dp[x][y-z]));
                }
            }
        }
        return dp[m][n];
    }
};