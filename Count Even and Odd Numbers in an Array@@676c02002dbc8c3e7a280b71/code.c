// Your code here...// Your code here...
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
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even +=arr[i];
        }
        else
            odd=arr[i];
        }
    
    printf("%d %d",even,odd);

    return 0;
}