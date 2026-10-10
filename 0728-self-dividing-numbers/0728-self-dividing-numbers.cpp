class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>nums;
        for(int i=left;i<=right;i++){
                    int temp=i;
                    bool isSelfDividing=true;
                    while(temp>0){
                        int digit=temp%10;
                        if(digit==0 || i %digit!=0){
                            isSelfDividing=false;
                            break;
                        }
                        temp=temp/10;
                    }
                        if(isSelfDividing){
                            nums.push_back(i);
                        }
        }
                        return nums;
                        
}
};

            