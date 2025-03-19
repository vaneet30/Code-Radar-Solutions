#include <stdio.h>

int main() {
    int n,v,c;
    scanf("%d", &n);
    scanf("%d",&v);
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==v){
            arr[i]=c;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}    