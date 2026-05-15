class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max_val=INT_MIN;
        int res;
        for(int val:divisors){
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%val==0) ++cnt;
            }
            if(cnt>max_val){
                max_val=cnt;
                res=val;
            }
            else if(cnt==max_val) res=min(res,val);
        }
        return res;
    }
};