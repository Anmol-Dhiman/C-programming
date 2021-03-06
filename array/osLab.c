#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define N     10
#define TRUE    1
#define FALSE   0

int term = 10;
int entering[N];
int number[N];

int max(int number[N]) {
    int i = 0;
    int max = number[0];
    for (i = 0; i < N; i++) {
        if (max < number[i])
            max = number[i];
        }
    return max;
    }

void lock(int i) {
    int j = 0;
    entering[i] = TRUE;
    number[i] = 1 + max(number);
    entering[i] = FALSE;
    for (j = 0; j < N; j++) {
        while (entering[j]);
        while (number[j] != 0 && (number[j] < number[i] || (number[i] == number[j]) && j < i)) {}
    }
}

void unlock(int i) {
    number[i] = 0;
}

void *fn(void *integer) {
    int i = (int) integer;
    lock(i);
    term++;
    printf("%d\n",term);
    
    unlock(i);
}    


int main()
{
    int th[N];
    void *fn(void *);
    pthread_t thrd[N];
    int i = 0; 
    for (i = 0; i < N; i++) {
        th[i] = pthread_create(&thrd[i], NULL, fn, (void *)i); 
        pthread_join(thrd[i], NULL);
    }
    return EXIT_SUCCESS;
}