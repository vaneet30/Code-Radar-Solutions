// Your code here...
#include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++)
//     {    
//         int ch=1;
//         for(int k=1;k<=i;k++)
//         {   if(ch>0){
//             ch=1;
//         }
//             printf("%d ",ch);
//             ch--;   
//         }
//         printf("\n");
//     }   
//     return 0;
// }

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) { // Increasing rows
        for (int j = 1; j <= i; j++) {
            // Print 0 for even positions, 1 for odd positions
            printf("%d ", (j % 2 == 0) ? 0 : 1);
        }
        printf("\n");
    }

    return 0;
}
