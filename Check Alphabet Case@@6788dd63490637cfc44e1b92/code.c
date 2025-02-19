// Your code here...
// Your code here...
#include<stdio.h>
// int main(){
//     char n;
//     scanf("%s",&n);
//     if(n<='a' || n<='z')
//     {
//         printf("Lowercase");
//     }
//     else if (n<='A' || n<='Z')
//     {
//         printf("Uppercase");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    char c;
    // printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("Lowercase ");
    } else if (c >= 'A' && c <= 'Z') {
        printf("Uppercase ");
    } else {
        printf("%c is not an alphabetic character.\n", c);
    }

    return 0;
}
