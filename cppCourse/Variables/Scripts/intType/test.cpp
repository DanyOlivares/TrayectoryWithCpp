#include <stdio.h>
#include <limits.h>

int main(){
    int val {6};
    short int shortVal {6};
    long longVal {6};
    long long int longLongVal {6};
    printf("The size of val is %ld\n", sizeof(val));
    printf("The size of shortVal is %ld\n", sizeof(shortVal));
    printf("The size of longVal is %ld\n", sizeof(longVal));
    printf("The size of longLongVal is %ld\n", sizeof(longLongVal));
    printf("%lld\n",LONG_LONG_MIN);
    printf("%lld\n",LONG_LONG_MAX);
}