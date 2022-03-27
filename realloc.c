#include <stdio.h>
#include <stdlib.h>

int main() {

    int* ptr;

    ptr = (int*)malloc(sizeof(int));

    for (int i =0; i<3; i++){
        ptr[i]=0;
    }

    for (int i =0 ; i<100; i++)
    {
        realloc(ptr, sizeof(int)*(i+1));
        ptr[i]=i;
    }

	return 0;
}