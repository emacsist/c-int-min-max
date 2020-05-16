#include <stdio.h>

#include <limits.h>

//无符号数最小都是 0
int main(void) {
    printf("CHAR_BIT %d\n", CHAR_BIT);
    printf("MB_LEN_MAX %d\n\n", MB_LEN_MAX);

    printf("SCHAR_MIN %d\n", SCHAR_MIN);
    printf("SCHAR_MAX %d\n\n", SCHAR_MAX);

    printf("UCHAR_MAX %d\n", UCHAR_MAX);
    printf("CHAR_MIN %d\n", CHAR_MIN);
    printf("CHAR_MAX %d\n\n", CHAR_MAX);

    printf("USHRT_MAX %d\n", USHRT_MAX);
    printf("SHRT_MIN %d\n", SHRT_MIN);
    printf("SHRT_MAX %d\n\n", SHRT_MAX);

    printf("UINT_MAX %u\n", UINT_MAX);
    printf("INT_MIN %d\n", INT_MIN);
    printf("INT_MAX %d\n\n", INT_MAX);

    printf("ULONG_MAX %lu\n", ULONG_MAX);
    printf("LONG_MIN %ld\n", LONG_MIN);
    printf("LONG_MAX %ld\n\n", LONG_MAX);

    printf("ULLONG_MAX %llu\n", ULLONG_MAX);
    printf("LLONG_MIN %lld\n", LLONG_MIN);
    printf("LLONG_MAX %lld\n", LLONG_MAX);

    return 0; 
}
