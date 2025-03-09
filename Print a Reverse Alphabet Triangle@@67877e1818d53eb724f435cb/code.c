#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;n<=i;i--)
    {    
        char ch='A';
        for(int k=1;k>=i;k++)
        {
            printf("%d ",ch);
            ch++;   
        }
        printf("\n");
    }   
    return 0;
}