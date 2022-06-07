#include <stdio.h>
#include <stdbool.h>

struct node
{
    char name;
    int bt;
    int at;
    int rtime;
    int ct;
    int wt;
} a[1000], b[1000], c[1000];

void input(int n)
{
    printf("Enter the input of Arrival time and Brust Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the process name : ");
        scanf("%s", &a[i].name);
        printf("Enter the arrival time for Process[%d] : ", i + 1);
        // this is for the buffer
        scanf("%d", &a[i].at);
        scanf("%d", &a[i].at);
        printf("Enter the brust time for Process[%d] : ", i + 1);
        scanf("%d", &a[i].bt);
    }
}
// these are for the sort function
bool btSort(struct node a, struct node b)
{
    return a.bt < b.bt;
}
bool btOppSort(struct node a, struct node b)
{
    if (a.bt != b.bt)
        return a.bt > b.bt;
    return a.at < b.at;
}
bool atSort(struct node a, struct node b)
{
    return a.at < b.at;
}

void disp(int num, int qt)
{
    int k = 0, f = 0, r = 0;
    int n = num, q;
    sort(a, a + n, atSort);
    int time = 0, i;
    int j, tArray[n];
    int runtime = 0;
    bool moveLast = false;
    for (i = 0; i < n; i++)
    {
        runtime += a[i].bt;
    }
    runtime += a[0].at;
    for (i = 0; time <= runtime;)
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
            c[k].name = 'i';
            c[k].bt = a[j].at - time;
            c[k].at = time;
            time += c[k].bt;
            k++;
            continue;
        }
        i = j;
        if (moveLast == true)
        {

            sort(b + f, b + r, btOppSort);
        }

        j = f;
        if (b[j].bt > qt)
        {
            c[k] = b[j];
            c[k].bt = qt;
            k++;
            b[j].bt = b[j].bt - qt;
            time += qt;
            moveLast = true;
            for (q = 0; q < n; q++)
            {
                if (b[j].name != a[q].name)
                {
                    a[q].wt += qt;
                }
            }
        }
        else
        {
            c[k] = b[j];
            k++;
            f++;
            time += b[j].bt;
            moveLast = false;
            for (q = 0; q < n; q++)
            {
                if (b[j].name != a[q].name)
                {
                    a[q].wt += b[j].bt;
                }
            }
        }
        if (f == r && i >= n)
            break;
    }
    tArray[i] = time;
    time += a[i].bt;
    for (i = 0; i < k - 1; i++)
    {
        if (c[i].name == c[i + 1].name)
        {
            c[i].bt += c[i + 1].bt;
            for (j = i + 1; j < k - 1; j++)
                c[j] = c[j + 1];
            k--;
            i--;
        }
    }

    int rtime = 0;
    for (j = 0; j < n; j++)
    {
        rtime = 0;
        for (i = 0; i < k; i++)
        {
            if (c[i].name == a[j].name)
            {
                a[j].rtime = rtime;
                break;
            }
            rtime += c[i].bt;
        }
    }

    float aWT = 0;
    float aRT = 0;
    float aTAT = 0;

    printf("\nGantt Chart\n");
    rtime = 0;
    for (i = 0; i < k; i++)
    {
        if (i != k)
            printf("|   P  %s    ", c[i].name);
        rtime += c[i].bt;
        for (j = 0; j < n; j++)
        {
            if (a[j].name == c[i].name)
                a[j].ct = rtime;
        }
    }
    printf("\n");
    rtime = 0;
    for (i = 0; i < k + 1; i++)
    {
        printf("%d\t", rtime);
        tArray[i] = rtime;
        rtime += c[i].bt;
    }

    printf("\n");

    printf("P.Name  AT\tBT\tCT\tTAT\tWT\tRT\n");
    for (i = 0; i < num && a[i].name != 'i'; i++)
    {
        if (a[i].name == '\0')
            break;
        printf(" P %d\t", a[i].name);
        printf("%d\t", a[i].at);
        printf("%d\t", a[i].bt);
        printf("%d\t", a[i].ct);
        printf("%d\t", a[i].wt + a[i].ct - rtime + a[i].bt);

        aTAT += a[i].wt + a[i].ct - rtime + a[i].bt;
        printf("%d\t", a[i].wt + a[i].ct - rtime);
        aRT += a[i].rtime - a[i].at;
        aWT += a[i].wt + a[i].ct - rtime;
        printf("%f\t", aRT);
    }
    printf("Average Response time: %f\n", (float)aRT / (float)n);
    printf("Average Waiting time: %f\n", (float)aWT / (float)n);
    printf("Average Turn Around time: %f\n", (float)aTAT / (float)n);
}

int main()
{
    int n;
    printf("Enter the number of process : ");
    scanf("%d", &n);
    input(n);
    disp(n, 1);
    return 0;
}