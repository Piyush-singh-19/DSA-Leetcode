class Solution {
public:
    int mirrorDistance(int n) {
        int num=n;
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum=sum*10+digit;
            n=n/10;
        }
        return abs(num-sum);
        
    }
};