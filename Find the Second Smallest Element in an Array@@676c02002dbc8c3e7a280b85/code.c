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
    int all_same = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            all_same = 0;
            break;
        }
    }

    if (all_same) {
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min ){
            smin=min;
            min=arr[i];
        }
        else if(arr[i]>min && arr[i]<smin){
            smin=arr[i];
        }
    }
    printf("%d",smin);
    return 0;
}
