#include <stdio.h>
int main()
{
    unsigned long long int a;
    a = 1;
    while(a>0){
        a++;
    }
    printf("%llu\n",a-1);
    unsigned long long int b,c;
    b = a-1;
    c = 0;
    do{
        b=b/10;
        c++;
    }
    while(b>0);
    printf("%llu\n",c);
    return 0;
}