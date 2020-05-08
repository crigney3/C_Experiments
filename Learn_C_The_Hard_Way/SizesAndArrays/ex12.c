#include <stdio.h>

int main(int argc, char *argv[]){
    int nums[] = {1,2,3,4,5};
    char name[4] = {'J', 'o', 'e', '\n'};
    char *cString = "BobAndAlsoJoe";

    printf("Size of an int: %ld\n", sizeof(int));
    printf("Size of nums[]: %ld\n", sizeof(nums));
    printf("Length of nums array: %ld\n\n", sizeof(nums)/sizeof(int));

    printf("Size of a char: %ld\n", sizeof(char));
    printf("Size of name: %ld\n", sizeof(name));
    printf("Length of name array: %ld\n\n", sizeof(name)/sizeof(char));

    printf("Example String: %s\n", cString);
    printf("Size of cString: %ld\n", sizeof(*cString));
    printf("Length of cString: %ld\n", sizeof(*cString)/sizeof(char));

    return 0;
}