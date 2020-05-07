#include <stdio.h>

/* This is actually ex8, ex3-7 were memorization and basics */
/* I skipped to this one bc I hadn't done command-line args before */

int main(int argc, char *argv[]){
    int arg_loop_iterator = 0;

    if(argc == 1){
        printf("Only one arg entered\n");
    }
    else if(argc > 1 && argc < 5){
        printf("Arguments: \n");

        for(arg_loop_iterator = 1; arg_loop_iterator < argc; arg_loop_iterator++){
            printf("%s ", argv[arg_loop_iterator]);
        }

        printf("\n");
    }
    else{
        printf("Too many args\n");
    }

    return 0;
}