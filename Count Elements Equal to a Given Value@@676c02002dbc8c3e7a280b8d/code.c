#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count=1;
        if(arr[i]==-1){
            continue;
        }
        for(int j=i+1;i<n;i++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }

        }
    }
    printf("%d",count);
    return 0;
}