#include <stdio.h>

int main()
{
    printf("Please input any alphanumeric length not exceeding 50 characters：\n");
    char m[50];
    int count=0,n=0,i;
    while((m[i]=getchar())!='\n'){
        if((m[i] < 'A'||m[i]>'Z')&&(m[i] <'a'||m[i]>'z'))
        n=0;
        else if(n==0){
            n=1;
        count++;}
    }
    printf("The number of words is:");
    printf("%d \n",count);
    return 0;
}