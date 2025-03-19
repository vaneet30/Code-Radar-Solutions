#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    int max=INT_MIN;
    int smax=INT_MIN;

    scanf("%d", &n);
    int arr[n];
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    
    int all_same = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            all_same = 0;
            break;
        }
    }

    if (all_same) {
        printf("-1\n");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(max<arr[i] && max!=arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i])
        {
            smax=arr[i];

    }
    
}
printf("%d",smax);
    return 0;
}