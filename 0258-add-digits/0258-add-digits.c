int addDigits(int num) {
    while(num>=10)
    {
        int digit=num%10;
        num=num/10;
        num=num+digit;
    }
    return num;
}