char* reverseVowels(char* s) {
    int arr[strlen(s)],k=0;
    char* res=malloc(strlen(s)+1);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            arr[k++]=i;
        }
    }
        
    int g=k-1,i;
    for( i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
           || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            res[i]=s[arr[g--]];
        }
        else{
            res[i]=s[i];
        }
    }
    res[i]='\0';
    return res;
}