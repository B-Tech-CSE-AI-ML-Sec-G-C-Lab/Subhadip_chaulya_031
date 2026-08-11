/*
comparison 2 string without using string libraby function
*/
#include <stdio.h>
int compareStrings(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}

int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if(compareStrings(str1, str2))
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");
    return 0;
}