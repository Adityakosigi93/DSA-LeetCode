char* frequencySort(char* s) {
    int hash[256]={0},k=0,max;
    char *result = malloc((strlen(s) + 1) * sizeof(char));
    for(int i=0;i<strlen(s);i++){
        hash[(unsigned char)s[i]]++;
    } 
    for(int i=0;i<256;i++){
        max=0;
        for(int j=0;j<256;j++){
            if(hash[j]>hash[max]){
                max=j;
            }
        }
        for(int l=0;l<hash[max];l++){
            result[k++]=(char)max;
          
        }
        hash[max]=0;
        
    }
    result[k]='\0';
    
    
    return result;


}