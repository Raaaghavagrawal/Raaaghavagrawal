class Solution {
public:
    int longestValidSubstring(string word, vector<string>& forbidden) {
        unordered_set<string>st(forbidden.begin(),forbidden.end());
        int ans=0,n=word.size();
        int j=0,i=-1;
        string curr="";
        while(j<n){
            curr+=word[j];
            string su="";
            for(int k=j;k>(j-10);k--){
                if(k<=i) break;
                su=word[k]+su;
                if(st.find(su)!=st.end()){
                    curr="";
                    i=k;
                    for(int g=k+1;g<=min(j,n-1);g++) curr+=word[g];
                    break;
                }
            }
            int len=curr.size();
            ans=max(ans,len);
            j++;
        }
        return ans;
    }
};