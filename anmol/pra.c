#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int i = 5;
void handler(int sig)
{
    i++;
    ++i;
    i++;
    ++i;
}
int main()
{
    int temp;
    signal(SIGALRM, handler);
    ++i;
    alarm(1);
    ++i;
    temp = i;
    temp = temp + 3;
    i = temp;
    pause();
    printf("%d\n", i);
}
