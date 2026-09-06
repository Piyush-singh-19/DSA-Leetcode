class Solution {
public:
    int countSeniors(vector<string>& details) 
{
    // int n=15;
    int count=0;
    for(int i=0;i<details.size();i++){
        string a=details[i].substr(11,2);
        int age=stoi(a);    
    
    if(age>60)
    
    count+=1;
    }
    return count;

    }
        
    };
