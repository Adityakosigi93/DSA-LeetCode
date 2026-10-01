class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count=0,count2=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                count++;
            }
            else if(bills[i]==10){
                count2++;
                if(count>=1){
                    count--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                
                if(count2>=1 && count>=1){
                    count--;
                    count2--;
                }  
                else if(count>=3){
                    count-=3;
                }
                else{
                    return false;
                }
            }
                
        
            
        }
        return true;
       
    }
};