#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[]){
    int a[100];
    int i =1;
    int j = 0;
    int x=0;
    int y=0;
    int temp;
    for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    for(x=0;x<9-y;x++){
     if(a[x]>a[x+1]) 
{
temp=a[x];
a[x]=a[x+1];
a[x+1]=temp;}
}
printf("The max is：%d\n",a[9]);
return 0;
}