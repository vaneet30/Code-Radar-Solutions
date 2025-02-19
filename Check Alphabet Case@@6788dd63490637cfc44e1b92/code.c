// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    char n;
    scanf("%s",&n);
    if(n<='a' || n<='z')
    {
        printf("Lowercase");
    }
    else if (n<='A' || n<='Z')
    {
        printf("Uppercase");
    }
    return 0;
}