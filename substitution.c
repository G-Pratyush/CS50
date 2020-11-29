#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool check(string key)
{
    int present = 0;
    if (strlen(key) == 26)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            for (int i = 0; i < 26; i++)
            {
                if(tolower(key[i]) == c)
                {
                    present++;
                    break;
                }
            }
        }
        if(present == 26)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string key = argv[1];
        if (check(key) == true)
        {
            string plaintext = get_string("plaintext: ");
            int count = strlen(plaintext);
            char ciphertext[count+1];
            ciphertext[count]='\0';     
            string abc = "abcdefghijklmnopqrstuvwxyz";
            
            for (int i = 0; i < count; i++)
            {
                if (isupper(plaintext[i]))
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if(abc[j] == tolower(plaintext[i]))
                        {
                            ciphertext[i] = toupper(key[j]);
                            break;
                        }
                    }
                }
                else if (islower(plaintext[i]))
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if(abc[j] == plaintext[i])
                        {
                            ciphertext[i] = tolower(key[j]);
                            break;
                        }
                    }
                }
                else
                {
                    ciphertext[i] = plaintext[i];
                }
            }
            printf("ciphertext: %s\n", ciphertext);
            return 0;
        }
        else
        {
            printf("Please input 26 character key with unique chars.\n");
            return 1;
        }
    }
    else
    {
        printf("Only 1 key is required.\n");
        return 1;
    }
}
