bool rotateString(char* s, char* goal) {
    int pos=-1,pos2=0,c=0;
    for(int i=0;;i=(i+1)%strlen(s)){
        c++;
        if(goal[0]==s[i]){
            int count=0,k=0,flag=0;
            for(int j=i;;j=(j+1)%strlen(s)){
                count++;
                if(s[j]==goal[k++]){

                }
                else{
                    flag=1;
                }
                if(count==strlen(s)){
                    break;
                }
            }
            if(flag!=1){
                return true;
            }
        }
        if(c==strlen(s)){
            break;
        }
    }
    return false;
    
    
    if(strlen(s) != strlen(goal)){
        return false;
    }
    
}