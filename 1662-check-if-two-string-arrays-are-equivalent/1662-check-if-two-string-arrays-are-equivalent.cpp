class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string sum=" ";
                string sum1=" ";


        for(int i=0;i<n;i++){
            sum+=word1[i];

        }
         for(int j=0;j<m;j++){
            sum1+=word2[j];

        }

        if(sum==sum1){
            return true;
        }
        else 
        return false;

        
        
    }
};