#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100];
    int i, j, k, l;
    // printf("How many words are there in the Sentence?\n");
    scanf("%d", &k);
    for (l = 0; l < k; l++)
    {
        // printf("\nEnter the word\n");
        scanf("%s", sent);
        i = strlen(sent);
        for (j = 0; j < i; j++)
        {
            if (sent[j] == 'A' || sent[j] == 'a')
            {
                printf(".-");
            }
            if (sent[j] == 'B' || sent[j] == 'b')
            {
                printf("-...");
            }
            if (sent[j] == 'C' || sent[j] == 'c')
            {
                printf("-.-.");
            }
            if (sent[j] == 'D' || sent[j] == 'd')
            {
                printf("-..");
            }
            if (sent[j] == 'E' || sent[j] == 'e')
            {
                printf(".");
            }
            if (sent[j] == 'F' || sent[j] == 'f')
            {
                printf("..-.");
            }
            if (sent[j] == 'G' || sent[j] == 'g')
            {
                printf("--.");
            }
            if (sent[j] == 'H' || sent[j] == 'h')
            {
                printf("....");
            }
            if (sent[j] == 'I' || sent[j] == 'i')
            {
                printf("..");
            }
            if (sent[j] == 'J' || sent[j] == 'j')
            {
                printf(".---");
            }
            if (sent[j] == 'K' || sent[j] == 'k')
            {
                printf("-.-");
            }
            if (sent[j] == 'L' || sent[j] == 'l')
            {
                printf(".-..");
            }
            if (sent[j] == 'M' || sent[j] == 'm')
            {
                printf("--");
            }
            if (sent[j] == 'N' || sent[j] == 'n')
            {
                printf("-.");
            }
            if (sent[j] == 'O' || sent[j] == 'o')
            {
                printf("---");
            }
            if (sent[j] == 'P' || sent[j] == 'p')
            {
                printf(".--.");
            }
            if (sent[j] == 'Q' || sent[j] == 'q')
            {
                printf("--.-");
            }
            if (sent[j] == 'R' || sent[j] == 'r')
            {
                printf(".-.");
            }
            if (sent[j] == 'S' || sent[j] == 's')
            {
                printf("...");
            }
            if (sent[j] == 'T' || sent[j] == 't')
            {
                printf("-");
            }
            if (sent[j] == 'U' || sent[j] == 'u')
            {
                printf("..-");
            }
            if (sent[j] == 'V' || sent[j] == 'v')
            {
                printf("...-");
            }
            if (sent[j] == 'W' || sent[j] == 'w')
            {
                printf(".--");
            }
            if (sent[j] == 'X' || sent[j] == 'x')
            {
                printf("-..-");
            }
            if (sent[j] == 'Y' || sent[j] == 'y')
            {
                printf("-.--");
            }
            if (sent[j] == 'Z' || sent[j] == 'z')
            {
                printf("--..");
            }
            if (sent[j] == '1')
            {
                printf(".----");
            }
            if (sent[j] == '2')
            {
                printf("..---");
            }
            if (sent[j] == '3')
            {
                printf("...--");
            }
            if (sent[j] == '4')
            {
                printf("....-");
            }
            if (sent[j] == '5')
            {
                printf(".....");
            }
            if (sent[j] == '6')
            {
                printf("-....");
            }
            if (sent[j] == '7')
            {
                printf("--...");
            }
            if (sent[j] == '8')
            {
                printf("---..");
            }
            if (sent[j] == '9')
            {
                printf("----.");
            }
            if (sent[j] == '0')
            {
                printf("-----");
            }
            if (sent[j] == '.')
            {
                printf(".-.-.-");
            }
            if (sent[j] == ',')
            {
                printf("--..--");
            }
            if (sent[j] == '?')
            {
                printf("..--..");
            }
            if (sent[j] == '!')
            {
                printf("-.-.--");
            }
            if (sent[j] == '/')
            {
                printf("-..-.");
            }
            if (sent[j] == ':')
            {
                printf("---...");
            }
            if (sent[j] == ';')
            {
                printf("-.-.-.");
            }
            if (sent[j] == '=')
            {
                printf("-...-");
            }
            if (sent[j] == '+')
            {
                printf(".-.-.");
            }
            if (sent[j] == '-')
            {
                printf("-....-");
            }
            if (sent[j] == '_')
            {
                printf("..--.-");
            }
            if (sent[j] == '"')
            {
                printf(".-..-.");
            }
            if (sent[j] == '@')
            {
                printf(".--.-.");
            }
        }
    }
    return 0;
}