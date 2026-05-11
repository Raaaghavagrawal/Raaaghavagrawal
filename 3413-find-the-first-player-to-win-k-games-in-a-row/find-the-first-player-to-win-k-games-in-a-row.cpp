class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n=skills.size();
        int w=skills[0];
        int c=0;
        for(int i=1;i<n;i++){
            if(skills[i]>w){
                w=skills[i];
                c=1;
            }
            else c++;
            if(c==k) break;
        }
        for(int i=0;i<skills.size();i++){
            if(skills[i]==w){
                return i;
                break;
            }
        }
        return -1;
    }
};