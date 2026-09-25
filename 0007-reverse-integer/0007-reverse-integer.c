#include <limits.h>
int reverse(int x){
    int digits=0;
    long long rev=0;
while(x!=0)
{
digits=x%10;
x=x/10;
if(rev > INT_MAX / 10 ||
           (rev == INT_MAX / 10 && digits > 7))
        {
            return 0;
        }

        if(rev < INT_MIN / 10 ||
           (rev == INT_MIN / 10 && digits < -8))
        {
            return 0;
        }
rev=rev*10+digits;

}
return rev;
}