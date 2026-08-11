/*
find length of a string without using library function
*/
#include <stdio.h>
int stringLength(char str[]){
    int i = 0;
   while(str[i] != '\0')
        i++;
    return i;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of string = %d", stringLength(str));
    return 0;
}