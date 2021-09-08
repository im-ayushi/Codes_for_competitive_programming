#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j = 0, k = 0, x, l;
    char str[100], str1[10][20], temp,c=0;
    printf("enter the string :");
    scanf("%[^\n]s", str);
    for (i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j] = '\0';
    for (i = 0;i <= k;i++)
    {
        c++;
        l = strlen(str1[i]);
        if(c%2==0)
        {
            for (j=0, x=l-1; j < x;j++,x--)
            {
                temp = str1[i][j];
                str1[i][j] = str1[i][x];
                str1[i][x] = temp;
            }
        }
    }
    for (i = 0;i <= k;i++)
    {
        printf("%s ", str1[i]);
    }
    return 0;
}
