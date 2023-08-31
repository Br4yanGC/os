#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

#define BIG 100000000UL

uint32_t counter = 0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void * count_to_big(void* arg) {
    for (uint32_t i=0; i<BIG; i++)
    {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
}

int main() {
    pthread_t myThread;
    pthread_create(&myThread, NULL, count_to_big, NULL);
    count_to_big(NULL);
    pthread_join(myThread, NULL);
    printf("Termine de contar, Counter=%u\n", counter);
}