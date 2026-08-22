char* reverseWords(char* s) {
    char hash[strlen(s)+2];
    int k=0,k2=0;
    char *word = malloc((strlen(s)+2) * sizeof(char));
    for(int i=1;i<strlen(s)+1;i++){
        hash[i]=s[k++];
    }
    hash[0]=' ';
    hash[strlen(s)+1]=' ';
    for(int i=strlen(s);i>0;i--){
        
        if(hash[i]!=' '){
            int count=0;
            int end=i;
            while(i>0 && hash[i]!=' '){
                count++;
                i--;
            }
            for(int j=i+1;j<=end;j++){
                word[k2++]=hash[j];
            }
            word[k2++]=' ';
        }
    }
    word[k2-1]='\0';
    return word;
}