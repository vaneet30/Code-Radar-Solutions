#include <stdio.h>

int main() {
    int n,v;
    scanf("%d", &n);
    int arr[n];
     
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&v);
    for(int i=0;i<n;i++){
        if(arr[i]==v){
            printf("%d",i);
            return 0;
        }
        else if(arr[i]!=v)
        {
            printf("-1");
            return 0;
        }
    }
    
    return 0;
}    