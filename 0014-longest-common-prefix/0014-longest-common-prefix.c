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
    for(j=0; j<strlen(strs[0]); j++){

        for(i=1; i<strsSize; i++){
            if(strs[0][j] == strs[i][j]){
                
                
            }
            else{
                result[l]='\0';
                return result;
            }
        }
        result[l++]=strs[0][j];
        
    }

    result[l]='\0';
    return result;
}