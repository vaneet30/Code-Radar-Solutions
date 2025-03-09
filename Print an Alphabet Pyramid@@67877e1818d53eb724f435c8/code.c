// Your code here...
int main()[
    int n;
    char a='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            print("%c",k);
        }
        printf("\n");
    }
    return 0;
]