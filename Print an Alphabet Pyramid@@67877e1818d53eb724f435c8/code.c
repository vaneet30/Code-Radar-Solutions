// Your code here...
#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   char ch='A';
        for(int k=1;k<=i;k++)
        {
            printf("%c ",ch);
            ch++;
           
        }
        printf("\n");
    }
            
        
    
    return 0;
}