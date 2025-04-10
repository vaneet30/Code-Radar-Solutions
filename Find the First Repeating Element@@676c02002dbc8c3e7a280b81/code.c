#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int found=0;
            if(arr[i]==arr[j]){
                printf("%d",arr[j]);
                found=1;
                break;
                // printf("%d",arr[j]);
            }
        if(found){
            break;
        }    
          

        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}