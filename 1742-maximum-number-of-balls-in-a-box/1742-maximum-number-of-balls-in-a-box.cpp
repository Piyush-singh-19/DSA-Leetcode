class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int box[46]={0};
        for(int i=lowLimit;i<=highLimit;i++){
            int n=i;
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum=sum+digit;
                n=n/10;

            }
            box[sum]++;
        }
        int count=0;
        for(int i=0;i<46;i++){
            count=max(count,box[i]);
        }
        return count;
        
    }
};