#include<stdio.h>
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
            even+=1;
        }
        else
            odd+=1;
        }
    
    printf("%d %d",even,odd);

    return 0;
}