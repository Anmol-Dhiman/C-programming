#include <stdio.h>
#include <stdbool.h>

// this data type is used to store the arrival time and brust time of the processes
struct node
{
    int bt;
    int at;

} a[1000], b[1000], c[1000];

void input(int n)
{
    printf("Enter the input of Arrival time and Brust Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arrival time for Process[%d] : ", i + 1);
        scanf("%d", &a[i].at);
        printf("Enter the brust time for Process[%d] : ", i + 1);
        scanf("%d", &a[i].bt);
    }
}

bool btimeSort(struct node a, struct node b)
{
    return a.bt < b.bt;
}
bool btimeOppSort(struct node a, struct node b)
{
    if (a.bt != b.bt)
        return a.bt > b.bt;
    return a.at < b.at;
}
bool atimeSort(struct node a, struct node b)
{
    return a.at < b.at;
}

int k = 0, f = 0, r = 0;
void display(int n)
{
    int i = 0;
    // the logic code
    sort(a, a + n, atimeSort);
    int time = 0, i;
    int j, temp[n];
    int fulltime = 0;
    bool last_move = false;
    for (i = 0; i < n; i++)
    {
        fulltime += a[i].bt;
    }
    fulltime += a[0].at;

    for (i = 0; time <= fulltime;)
    {
        j = i;
        while (a[j].at <= time && j != n)
        {

            b[r] = a[j];
            j++;
            r++;
        }
        if (r == f)
        {

            c[k].bt = a[j].at - time;
            c[k].at = time;
            time += c[k].bt;
            k++;
            continue;
        }
        i = j;
        if (last_move == true)
        {
            sort(b + f, b + r, btimeOppSort);
        }
        else
        {
            sort(b, b + n, btimeSort);
        }
       
        
    }
}

int main()
{
    int n;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    input(n);
    display(n);

    return 0;
}