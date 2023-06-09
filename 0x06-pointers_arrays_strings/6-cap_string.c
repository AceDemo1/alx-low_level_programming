#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
    int i;
    int capitalize_next = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (capitalize_next && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }

        capitalize_next = is_separator(str[i]);
    }

    return str;
}

/**
 * is_separator - checks if a character is a word separator
 * @c: input character
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";

    for (int i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return 1;
        }
    }

    return 0;
}

