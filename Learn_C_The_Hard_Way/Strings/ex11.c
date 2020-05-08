#include <stdio.h>

int main(int argc, char *argv[]){
    char name[4] = { 'a' };

    printf("%c %c %c %c\n", name[0], name[1], name[2], name[3]);

    name[1] = 'd';
    name[2] = 'a';
    name[3] = '\0';

    printf("%c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("%s \n", name);

    char *altName = "Bob";

    printf("%c %c %c\n", altName[0], altName[1], altName[2]);

    printf("%s\n", altName);

    return 0;
}