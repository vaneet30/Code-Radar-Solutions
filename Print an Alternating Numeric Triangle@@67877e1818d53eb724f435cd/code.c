// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {    
        int ch=1;
        for(int k=1;k<=i;k++)
        {
            printf("%d ",ch);
            ch--;   
        }
        printf("\n");
    }   
    return 0;
}