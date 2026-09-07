class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>expected=heights;
        sort(expected.begin(),expected.end());
        int count=0;
        for(int i=0;i<n;i++){
            // expected[i]==sort(heights,heights+n);
            if(heights[i]!=expected[i]){
                count+=1;
            }
            
        }
        return count;
    }
};