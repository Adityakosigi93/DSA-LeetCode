char* largestOddNumber(char* num) {
    char *result = malloc((strlen(num) + 1) * sizeof(char));
    int k=0;
    for(int i=strlen(num)-1;i>=0;i--){
        
        if((num[i]-'0')%2!=0){
            for(int j=0;j<=i;j++){
                result[k++]=num[j];
            }
            break;
        }
    }
    result[k]='\0';
    return result;


}