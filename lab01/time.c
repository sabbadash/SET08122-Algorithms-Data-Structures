#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// .\time.exe runTimes

void code() {
    for (int i = 0; i < 10000; i++) {
        printf(".");
    }
    printf("\n");
}

void run(float *times, int index) {
    clock_t t;
    printf("start: %d \n", (int) (t=clock()));

    code();

    printf("stop: %d \n", (int) (t=clock()-t));
    float sec = (double) t / CLOCKS_PER_SEC;
    printf("Elapsed: %.3f seconds\n\n", sec);
    times[index] = sec;
}

int main(int argc, char *argv[]) {
    int runTimes = (argc == 2) ? atoi(argv[1]) : 10;
    float *times = (float *)calloc(runTimes, sizeof(float));

    for (int i = 0; i < runTimes; i++){
        run(times, i);
    }

    float sum = 0;
    for (int i = 0; i < runTimes; i++) {
        sum += times[i];
    }
    printf("***\t report \t***\n\n");
    printf("Average: %.3f seconds\n", sum / runTimes);
    printf("Amount of times code runs: %d\n\n", runTimes);

    for (int i = 0; i < runTimes; i++) {
        printf("%.3f, ", times[i]);
    }
    printf("\n");
    free(times);

    return 0;
}