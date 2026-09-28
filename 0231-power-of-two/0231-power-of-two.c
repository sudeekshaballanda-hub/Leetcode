bool isPowerOfTwo(int n) {
    if(n<=0)
    {
        return false;
    }
    unsigned int x=1;
    while(x<=n)
    {
        if(x==n)
        {
            return true;
        }
        x*=2;
    }
    return false;
}