/*
reverse a string
*/

#include <stdio.h>

void reverseString(char str[]){
    int i, length = 0;
    char temp;
    while(str[length] != '\0')
        length++;
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf(" %s", str);
    reverseString(str);
    printf("Reversed string = %s", str);
    return 0;
}