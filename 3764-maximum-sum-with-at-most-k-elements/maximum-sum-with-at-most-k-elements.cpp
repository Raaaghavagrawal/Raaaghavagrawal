class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int>maxi;
        int n=grid.size();
        for(int i=0;i<n;i++){
            sort(grid[i].rbegin(),grid[i].rend());
            for(int j=0;j<limits[i];j++){
                maxi.push_back(grid[i][j]);
            }
        }
        sort(maxi.rbegin(),maxi.rend());
        long long ans=0;
        for(int i=0;i<k;i++) ans+=maxi[i];
        return ans;
    }
};