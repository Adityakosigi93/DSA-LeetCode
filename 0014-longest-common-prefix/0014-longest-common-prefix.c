char* longestCommonPrefix(char** strs, int strsSize) {
    char *result=malloc((strlen(strs[0])+1)*sizeof(char));
    int k=0,l=0,i,j;
    if(strsSize == 1){
        for(i=0; i<strlen(strs[0]); i++){
            result[i]=strs[0][i];
        }
        result[i]='\0';
        return result;
    }
    for(i=0;i<strlen(strs[0]);i++){

        for(j=1;j<strsSize;j++){
            if(strs[0][i] == strs[j][i]){
                
                
            }
            else{
                result[l]='\0';
                return result;
            }
        }
        result[l++]=strs[0][i];
        
    }

    result[l]='\0';
    return result;
}