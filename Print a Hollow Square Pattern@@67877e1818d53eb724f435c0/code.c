// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=2*i-1;j++)
        {
        if(i==1 || i==n-1 || j==1 || j==n-1)


            
                printf("*");
            
        }
        printf("\n");
    }
    

    return 0;
}