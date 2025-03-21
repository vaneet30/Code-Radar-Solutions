#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    int min=INT_MAX;
    int smin=INT_MAX;

    scanf("%d", &n);
    int arr[n];
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min ){
            smin=min;
            min=arr[i];
        }
        else if(arr[i]>min && arr[i]smin){
            min=arr[i];
        }
    }
    printf("%d",smin);
    return 0;
}
