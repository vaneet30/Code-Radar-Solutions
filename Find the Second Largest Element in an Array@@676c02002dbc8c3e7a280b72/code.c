#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    int max=INT_MIN;
   int  smax=INT_MIN;

    scanf("%d", &n);
    int arr[n];
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    for(int i = 0; i < n; i++) {
        if(max<arr[i] && max!=arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i])
        {
            smax=arr[i];
        }
        else{
            printf("-1");
        }

    }
    printf("%d",smax);
    return 0;
}
