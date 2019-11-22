#include <stdio.h>
int main()
{
 unsigned int a,arr[10];
 printf("请输入10个非负整数：\n");
 int i = 0, j = 0;
 int max;
 for(i = 0;i < 10;++i)
 arr[i]=0;
 
 while ((a = getchar()) != EOF){
     for(i=0;i<9;i++){
     j=i+1;
     if(arr[i]>arr[j]){
         max = arr[i];
         arr[j]=arr[i];
         }
     }	
 }
printf("max= %d\n",max);
}