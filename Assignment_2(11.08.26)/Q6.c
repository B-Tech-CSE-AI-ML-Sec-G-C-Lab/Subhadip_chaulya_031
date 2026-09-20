
/*  
count alphabet,digit and special character
*/
#include <stdio.h>

void countCharacters(char str[], int *alpha, int *digit, int *special)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
            (*alpha)++;
        else if(str[i] >= '0' && str[i] <= '9')
            (*digit)++;
        else
            (*special)++;

        i++;
    }
}

int main()
{
    char str[100];
    int alpha = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    countCharacters(str, &alpha, &digit, &special);

    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}
