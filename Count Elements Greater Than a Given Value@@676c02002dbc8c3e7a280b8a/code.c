#include<stdio.h>
int main(){
    int n,c,count=0;
    scanf("%d %d",&n,&c);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(c<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}