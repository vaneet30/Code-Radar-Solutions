// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
            pritnf("*");
            printf("\n");
        }
    }
    return 0;
}