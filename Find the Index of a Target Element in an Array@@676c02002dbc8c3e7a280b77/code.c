#include <stdio.h>
#include <limits.h>

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
    printf("%d",c);
    return 0;
}    