#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Ensure that the number of command line arguments is 2 and only 2.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Get key from user input in the command line.
    int k = atoi(argv[1]) % 26;

    // Prompt user for input to be passed through the Caesar cipher.
    printf("plaintext: ");
    string text = GetString();
    int n = strlen(text);

    // Implement the Caesar cipher.
    printf("ciphertext: ");

    int cipher;

    for (int i = 0; i < n; i++)
    {
        // Encypher only those characters that are alphabetical.
        if (isalpha(text[i]))
        {
            // Preserve case of character.
            if (isupper(text[i]))
            {
                cipher = (int) text[i] + k;
                if (cipher > 90)
                {
                    cipher = cipher - 26;
                }
            }
            else
            {
                cipher = (int) text[i] + k;
                if (cipher > 122)
                {
                    cipher = cipher - 26;
                }
            }
        }
        else
        {
            cipher = text[i];
        }
        printf("%c", (char) cipher);
    }
    printf("\n");
    return 0;
}
