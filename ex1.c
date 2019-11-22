#include <stdio.h>
#define MAXLINE 50
int main()
{
    char c;
    printf("请输入一个长度不超过50的字符串：\n");
    int  word = 0, number = 0;
    while ((c = getchar()) != ' ')
    {
       if (c == ' ')
        {
            word = 0;
        }
        else if (word == 0)
        {
            number++;
            word = 1;
		}
    }
    printf("%d\n", number);
}