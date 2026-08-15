bool isHappy(int n) {
    
    for(int i=0;i<n;i++){
        int sum=0,digit;
        while(n>0){
            digit=n%10;
            sum+=digit*digit;
            n=n/10;
        }
        n=sum;
        if(sum==1){
            return true;
        }
    }
    return false;
}