// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(n==i || n==i-1){
            for(int j=0;j<=2*i-1;j++)
            {
                printf("* ");
            }
        }
    }
    

    return 0;
}