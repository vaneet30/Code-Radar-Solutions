// Your code here...
#include<stdio.h>
// #includ< 
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<max){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);

    return 0;
}