#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            i++;
            printf("Sorted");
        }
        else printf("Not Sorted");
           
    }
    return 0;
}