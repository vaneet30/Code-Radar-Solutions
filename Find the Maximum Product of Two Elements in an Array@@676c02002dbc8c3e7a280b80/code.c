#include<stdio.h>
#include<limits.h>

int main() {
    int n;
   

    scanf("%d", &n);
    int arr[n];
    int max=INT_MIN;
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n ;j++){
            int product=arr[i]*arr[j];
            if(product>max){
                max=product;
            }

        }
    }
    printf("%d",max);
    return 0;
}