#include <stdio.h>
#include <stdlib.h>

/* This is an exercise from my C++ class, rewritten in C */

void changeVariable(int a){
    a += 7;
    printf("Inside changeVariable(): var's value is now: %i\n", a);
}

void changePointer(int* a){
    *a += 7;
    printf("Inside changePointer(): var's value is now: %i\n", *a);
}

int getLengthArray(int arr[]){
    int i = 0;
    while(1){
        i++;
        if(arr[i] == 0){
            return i--;
        }
    }
    return i;
}

int getLengthPointer(int* ptr){
    int i = 0;
    while(1){
        i++;
        ptr += 1;
        if(*ptr == 0){
            return i--;
        }
    }
    return i;
}

int* createStackArray(){
    int stackArr[] = {0,1,2,3,4};
    return stackArr;
}

int* createHeapArray(int size){
    int* arr = malloc(size * sizeof(int));
    int i = 0; 
    for(i = 0; i < size; i++){
        arr[i] = i;
    }
    return arr;
}

void partOneWrapper(){
    int a = 10;
    printf("Starting value: %i\n", a);
    changeVariable(a);
    printf("Value after changeVariable(): %i\n", a);

    changePointer(&a);
    printf("Value after changePointer(): %i\n", a);
}

void partTwoWrapper(){
    int arrTest[] = {1,5,2,29,20,32,5,6,9,0};
    int* arrTestPtr = arrTest;

    printf("Number of elements in test array (using array): %i\n", getLengthArray(arrTestPtr));

    printf("Number of elements in test array (using pointers): %i\n", getLengthPointer(arrTest));
}

void partThreeWrapper(){
    int* stackArr = createStackArray();
    int* heapArr = createHeapArray(12);

    int i = 0;

    printf("Printing array from stack: ");
    for(i = 0; i < 5; i++){
        printf("%i, ", stackArr[i]);
    }
    printf("\n");

    printf("Printing array from heap: ");
    for(i = 0; i < 12; i++){
        printf("%i, ", heapArr[i]);
    }
    printf("\n");

    free(heapArr);
}

int main(int argc, char *argv[]){
    partOneWrapper();
    printf("\n");

    partTwoWrapper();
    printf("\n");

    partThreeWrapper();

    return 1;
}