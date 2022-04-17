#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numPtr;
    numPtr = malloc(sizeof(int));
    printf("%p\n",numPtr);
    return 0;
}