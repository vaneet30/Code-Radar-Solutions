// Your code here...
#include<stdio.h>
int main(){
    int n;
 
    scan("%d",&n);
    int arr[n];
    for(int i=0,i<n;i++)
    {
       scanf("%d",arr[i]); 
    }
    int max=arr[i];
    int min=arr[i];
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