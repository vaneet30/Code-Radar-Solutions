#include<stdio.h>

int main() {
    int n;
    int max=arr[0];
   int  smax=arr[0];

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

    }
    printf("%d",smax);
    return 0;
}
