// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
    
        for(int k=1;k<=i;k++)
        {   
            printf("%d",(i+k)%2);
        }
        
        printf("\n");
    }   
    return 0;
}


