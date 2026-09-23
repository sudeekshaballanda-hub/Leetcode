bool isPalindrome(int x) {
    int digit=0;
    long long rev=0;
    int num=x;
    while(x>0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    if(rev==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}