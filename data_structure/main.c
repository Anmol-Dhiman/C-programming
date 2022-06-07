#include "Functions.h"
#include <pthread.h>

int main()
{
    char Name[30];
    int RollNo;
    printf("Enter your name : ");
    scanf("%[^\n]s", Name);
    printf("Enter your Roll Number : ");
    scanf("%d", &RollNo);

    char name[30];
    strcpy(name, Name);
    pthread_t t1, t2, t3;

    pthread_create(&t1, NULL, task_1, Name);
    pthread_create(&t2, NULL, task_2, name);
    pthread_create(&t3, NULL, task_3, name);

    pthread_exit(NULL);
}
