#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Data Type\nSize\nFormat Specifier\nRange\n");

    printf("\nchar\n%zu\n%%c\n%d to %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

    printf("\nunsigned char\n%zu\n%%c\n0 to %u\n",
           sizeof(unsigned char), UCHAR_MAX);

    printf("\nshort int\n%zu\n%%hd\n%d to %d\n",
           sizeof(short int), SHRT_MIN, SHRT_MAX);

    printf("\nunsigned short int\n%zu\n%%hu\n0 to %u\n",
           sizeof(unsigned short int), USHRT_MAX);

    printf("\nint\n%zu\n%%d\n%d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("\nunsigned int\n%zu\n%%u\n0 to %u\n",
           sizeof(unsigned int), UINT_MAX);

    printf("\nlong int\n%zu\n%%ld\n%ld to %ld\n",
           sizeof(long int), LONG_MIN, LONG_MAX);

    printf("\nunsigned long int\n%zu\n%%lu\n0 to %lu\n",
           sizeof(unsigned long int), ULONG_MAX);

    return 0;
}
