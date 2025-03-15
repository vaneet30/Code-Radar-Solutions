#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int s=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);       
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i-1]){
            s=1;
            
        }
        else s=0;
    }
    if(s=1)
        printf("Sorted");
    else
        printf("Not Sorted");
    return 0;
}