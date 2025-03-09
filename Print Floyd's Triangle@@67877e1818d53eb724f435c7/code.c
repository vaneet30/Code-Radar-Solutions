// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int n;
    int no=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        for(int k=1;k<=i;k++)
        {
            printf("%d ",no);
            no++;   
        }
        printf("\n");
    }   
    return 0;
}