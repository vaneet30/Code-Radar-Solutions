// Your code here...
#include<stdio.h>
int main()[
    int n;
    char ch='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            print("%c",ch);
        }
        printf("\n");
    }
    return 0;
]