class Solution {
public:
    int maxDepth(string s) {
        int count=0,ans=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='('){
                count++;
                ans=max(ans,count);
            }
            if(c==')'){
                count--;
            }
        }
        return ans;

        
    }
};