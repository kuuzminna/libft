#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int c = 5;
    printf("%s\n", strnstr("", "foo", 4));
	printf("%s\n", strnstr("gh", "foo", 4));
	printf("%s\n", strnstr("o", "foo", 4));
	printf("%s\n", strnstr("", "foo", 3));
    return 0;
}
