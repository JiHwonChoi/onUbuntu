#include <stdio.h>
#include <stdlib.h>

int main(){

    int* arr = (int*)malloc(sizeof(int)*100);
    for(int i=0; i<100; i++)
        arr[i]=0;
    free(&arr[50]);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[50]);
    printf("%d\n",arr[100]);
    return 0;
}