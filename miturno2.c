/*
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* miTurno(void* arg) {
    int *recVar = (int *) arg;
    for (size_t i=0; i<8; i++)
    {
        sleep(1);
        printf("Es mi turno! %d \n", *recVar);
        (*recVar)++;
    }
}

void tuTurno() {
    for (size_t i=0; i<3; i++)
    {
        sleep(2);
        printf("Es tu turno! %lu \n", i);
    }
}

int main() {
    pthread_t myThread;
    int myVar = 1;

    pthread_create(&myThread, NULL, miTurno, &myVar);
    tuTurno();
    pthread_join(myThread, NULL);
    printf("Variable final de mi variable: %d \n", myVar);
    return 0;
}
*/

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* miTurno(void* arg) {
    int *localVar = (int *) malloc(sizeof(int));
    *
    for (size_t i=0; i<8; i++)
    {
        sleep(1);
        printf("Es mi turno! %d \n", *recVar);
        (*recVar)++;
    }
    return localVar;
}

void tuTurno() {
    for (size_t i=0; i<3; i++)
    {
        sleep(2);
        printf("Es tu turno! %lu \n", i);
    }
}

int main() {
    pthread_t myThread;
    int *myVar;

    pthread_create(&myThread, NULL, miTurno, NULL);
    tuTurno();
    pthread_join(myThread, NULL);
    printf("Variable final de mi variable: %d \n", myVar);
    return 0;
}