// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("%d",i);
    }

    return 0;
}