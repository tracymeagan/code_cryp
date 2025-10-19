/*proram decription : Using a switch statement, this program asks the user to enter a character from
standard-input and displays a message whether the character is a vowel (upper and
lower case), i.e., (a, e, i, o, u) or not

author : Tracy Lienghotue 

date : 1/10/2025
*/
#include <stdio.h>

int main() {
    char ch;
   
    printf("Enter a character: ");
    scanf("%c", &ch);
   
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("'%c' is a vowel\n", ch);
            break;
        default:
            printf("'%c' is not a vowel\n", ch);
    }
   
    return 0;
}
