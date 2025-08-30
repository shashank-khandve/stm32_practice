#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define buff_size 5
int buffer [buff_size],in=0,out=0;

sem_t empty;
sem_t full;
pthread_mutex_t mutex;

void *producer(void *arg){
    int item;
    while(1){
        item=rand()%100;
        
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        
        buffer[in]=item;
        printf("produced data=%d\n",buffer[in]);
        in=(in+1)%buff_size;
        
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
        sleep(1);
        
    }
}
void *consumer (void *arg){
    int item;
    while(1){
        
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        
        item=buffer[out];
        printf("---consumed data=%d\n",item);
        out=(out+1)%buff_size;
        
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
        sleep(2);
    }
}

int main(){
    pthread_t prod,cons;
    
    sem_init (&empty,0,buff_size);
    sem_init (&full,0,0);
    pthread_mutex_init (&mutex,NULL);
    
    pthread_create(&prod,NULL,producer,NULL);
    pthread_create(&cons,NULL,consumer,NULL);
    
    pthread_join(prod,NULL);
    pthread_join(cons,NULL);
}
