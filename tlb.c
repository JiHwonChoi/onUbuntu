#include<stdlib.h>
#include<stdio.h>
#include<sys/time.h>
#include <unistd.h>
#include<time.h>

int main(){

    int PAGESIZE = 16;
    int NUMPAGES = 256;
    int a[100000] = {0,};
    int jump = PAGESIZE / sizeof(int);

    struct timespec begin, end ;

    clock_gettime(CLOCK_MONOTONIC, &begin);
    double diffTime;
    for (int i = 0; i < NUMPAGES * jump; i += jump) {
        a[i] += 1;
    }
    clock_gettime(CLOCK_MONOTONIC, &end);

    diffTime = (end.tv_sec - begin.tv_sec) + (end.tv_nsec - begin.tv_nsec);
    printf("%f \n",diffTime);
    return 0;
}

