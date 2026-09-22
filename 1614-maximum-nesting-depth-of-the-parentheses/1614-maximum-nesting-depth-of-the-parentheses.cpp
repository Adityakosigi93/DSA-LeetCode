class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        for(int i=0;i<s.size();i++){
            
                int lb=0,rb=0,dept;
                for(int j=0;j<i;j++){
                    if(s[j]=='('){
                        lb++;
                    }
                    if(s[j]==')'){
                        rb++;
                    }
                }
                dept=lb-rb;
                if(dept>max){
                    max=dept;
                }

            
        }
        return max;
    }
};