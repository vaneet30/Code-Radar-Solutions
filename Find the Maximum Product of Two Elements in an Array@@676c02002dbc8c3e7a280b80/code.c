#include<stdio.h>
#include<limits.h>

int main() {
    int n;
   int product=1;
   int max=INT_MIN;

    scanf("%d", &n);
    int arr[n];
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n ;j++){
            product=i*j;
            if(max<product){
                max=product;
            }

        }
    }
    printf("%d",max);
    return 0;
}