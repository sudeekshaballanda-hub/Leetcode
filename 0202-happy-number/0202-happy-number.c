bool isHappy(int n) {
    int seen[1000]={0};
    while(n!=1)
    {
        int temp=n;
        int sum=0;
        while(temp!=0)
        {
            int digit=temp%10;
            sum+=(digit*digit);
            temp/=10;
        }
        n=sum;

        if(seen[n]==1) return false;
        seen[n]=1;
    }
    return true;
}