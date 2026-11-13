class Solution {
public:
    int countPoints(string rings) {
        int count=0;
        int n=rings.size();
        int rod[10][3]={0};
        for(int i=0;i<n;i=i+2){
        int r=rings[i+1]-'0';

        if(rings[i]=='R'){
            rod[r][0]=1;

        }
         else if(rings[i]=='B'){
            rod[r][1]=1;
        }
         else if(rings[i]=='G'){
            rod[r][2]=1;
        }
        }

        for(int i=0;i<10;i++){
            if(rod[i][0]==1 && rod[i][1]==1 && rod[i][2]==1 ){
                count++;
            }
        }

        return count;
    }
};