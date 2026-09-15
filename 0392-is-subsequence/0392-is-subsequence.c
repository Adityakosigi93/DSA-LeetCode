bool isSubsequence(char* s, char* t) {
    if(strlen(s)==0){
        return true;
    }
    int k=0,arr[strlen(t)+1],l=0,st=-1;
    for(int i=0;i<strlen(s);i++){
        int flag=0;
        for(int j=st+1;j<strlen(t);j++){
            if(s[i]==t[j]){
                arr[l++]=j;
                flag=1;
                st=j;
                break;
            }
        }
        if(flag==0){
            return false;
        }
    }
    for(int i=0;i<l-1;i++){
        if(arr[i]<arr[i+1]){

        }
        else{
            return false;
        }
    }
    
    return true;
}