//#include "heap.h"
#include <stdio.h>

#define bool char;
#define true 1;
#define false 0;

void mergeSort(int array[], int start, int end);
int* binarySearch(int array[], int left, int right, int val);

int main(){
	printf("Hello World");
    int test[9];
    test[0] = 2;
    test[1] = 3;
    test[2] = 5;
    test[3] = 8;
    test[4] = 90;
    test[5] = 91;
    test[6] = 100;
    test[7] = 101;
    test[8] = 103;
    
    int val = 8;
    int* location = binarySearch(test, 0, 9, val);
    if(location) printf("  Found %d at %d  ", val, *location);
	return 0;
}

void mergeSort(int array[], int start, int end){
    int middle = (start+end) / 2;
    mergeSort(array, start, middle);
    mergeSort(array, middle+1, end);

    for(int i = 0; i < array; i++){
        
    }
}

int* binarySearch(int array[], int left, int right, int val){
    /*if(left == right){
        printf("Search Failed");
        int* fail;
        fail = malloc(-1);
        return fail;
    }*/

    int m = (left + right)/2;
    
    if(array[m] == val) return &m;

    if(val < array[m]) return binarySearch(array, left, m - 1, val);
    else return binarySearch(array, m, right, val);
}
