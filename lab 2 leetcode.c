#include <stdio.h>

char* reversePrefix(char* word, char ch)
{
    int i = 0;
    int j;
    char temp;

    // Find first occurrence of ch
    while (word[i] != '\0' && word[i] != ch)
    {
        i++;
    }

    // If ch is not found
    if (word[i] == '\0')
    {
        return word;
    }

    // Reverse from 0 to i
    j = 0;

    while (j < i)
    {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;

        j++;
        i--;
    }

    return word;
}

int main()
{
    char word[] = "abcdefd";
    char ch = 'd';

    printf("Result: %s\n", reversePrefix(word, ch));

    return 0;
}
