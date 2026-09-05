int myAtoi(char* s){
    int l=strlen(s);
    int j=0,sign=1;
    long long num=0;
    while(1){
        if(s[j]==' '){
            j++;
        }
        else{
            break;
        }
    }
    if(s[j]=='-'||s[j]=='+'){
        if(s[j]=='-'){
            sign=-1;
        }
        j++;
    }
    while(s[j]>='0'&&s[j]<='9'){
        num=num*10+(s[j]-'0');
        if(sign==1&&num>2147483647)
            return 2147483647;

        if(sign==-1&&num>2147483648LL)
            return -2147483648LL;

        j++;
    }
    return sign*num;
}