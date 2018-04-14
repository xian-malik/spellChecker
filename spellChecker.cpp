#include <stdio.h>
#include <string.h>

char dictionary[6][100] =
{
    { "i" },
    { "am" },
    { "a" },
    { "good" },
    { "boy" },
    { "very" }
};
int mistake = 0;
void spellCheck(char w[])
{
    int l, flag = 0;
    for(l=0; l<6; l++)
    {
        if( strcmp(dictionary[l],w) == 0 ){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\nMistake: %s",w);
        mistake = 1;
    }
}

int main() {
    char str[512], word[256], check;
    int i = 0, j = 0;

    printf("Enter a sentence(All small letter):");
    gets(str);
    str[strlen(str)] = '\0';

    if (str[0] == '\0') {
        printf("Input string is NULL\n");
        return 0;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '.') {
                word[j] = '\0';
                if(word[0] = '\0')
                    spellCheck(word);
                j = 0;
        } else {
                word[j++] = str[i];
        }
        i++;
    }
    word[j] = '\0';
    spellCheck(word);

    if( mistake == 0 )
        printf("\nGood job. No mistake.");

    printf("\n");
    return 0;
}
