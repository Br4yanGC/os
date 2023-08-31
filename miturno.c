#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* miTurno(void* arg) {
    while(1){
        sleep(1);
        printf("Es mi turno!\n");
    }
}

void tuTurno() {
    while(1){
        sleep(2);
        printf("Es tu turno!\n");
    }
}

int main() {
    pthread_t myThread;
    pthread_create(&myThread, NULL, miTurno, NULL);
    tuTurno();
    return 0;
}

/*
    gcc -pthread miturno.c -o miturno.out
*/