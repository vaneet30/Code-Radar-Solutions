// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>0 && b<0)||(a<0 && b>0) { 
        printf("True");  // If either value is zero, print "True"
    } 
    else {
        printf("False");  // In all other cases, print "False"
    }

    return 0;
}
