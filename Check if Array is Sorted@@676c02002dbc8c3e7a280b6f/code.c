#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int s=1;

    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);       
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){
            s=0;
            break;   
        }   
    }
    if(s)
        printf("Sorted");
    else
        printf("Not Sorted");
    return 0;
}