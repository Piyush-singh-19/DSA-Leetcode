class Solution {
public:
    int countCommas(int n) {
        // long comma=0;
        // for(int i=1000;i<=n;i++){
        //     comma++;
        // }
        // return comma;
        int count=0;

        if(n<=999){
        count=0;}
        else{
        count=n-999;
        }        
    
    return count;
    }
};