bool isAnagram(char* s, char* t) {
    int flag=0,hash[26]={0},hash2[26]={0};
    for(int i=0;i<strlen(s);i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<strlen(t);i++){
        hash2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]!=hash2[i]){
            return false;
        }
        
    }
    return true;
    
    



    
}