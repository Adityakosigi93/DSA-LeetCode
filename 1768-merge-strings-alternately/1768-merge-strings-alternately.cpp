class Solution {
public:
    string mergeAlternately(string word1,string word2){
        int i=0,j=0;
        string res="";
        for(int g=0;g<word1.length()+word2.length();g++){
            if(g%2==0 && i<word1.length()){
                res+=word1[i++];
            }
            else if(j<word2.length()){
                res+=word2[j++];
            }
        }
        while(i<word1.length()){
            res+=word1[i++];
        }
        while(j<word2.length()){
            res+=word2[j++];
        }



        return res;
    }
};