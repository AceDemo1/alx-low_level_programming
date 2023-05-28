#include "main.h"

/**
 *_islower - returns 1 for lowercase alphabet and 0 for uppercase alphabet
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z') {
        return 1; // Character is lowercase
    }
    else {
        return 0; // Character is not lowercase
    }


}
