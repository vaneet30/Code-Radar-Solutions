#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int visited=-1;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int count=1;
    for(int i = 0; i < n; i++) 
    {   if(arr[i]==1)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=visited;
                i++;
                j=i+1;

            }
            
        }
        printf("%d %d\n", arr[i], count);

    }
    return 0;
}
