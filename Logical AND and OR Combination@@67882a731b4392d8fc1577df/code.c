// Your code here...
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a>0 && b<0)
//     {
//         printf("True");
//     }
//     else if(a==0 || b==0){
//         printf("True");
//     }
//     else
//     {
//         printf("False");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // if (a == 0 || b == 0) { 
    //     printf("True");  // If either value is zero, print "True"
    
    if ((a > 0 && b < 0) || (a==0 &&b==0)){  
        printf("True");  // If a is positive and b is negative, print "True"
    } 
    else {
        printf("False");  // In all other cases, print "False"
    }

    return 0;
}
