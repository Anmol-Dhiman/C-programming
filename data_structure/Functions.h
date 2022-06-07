#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

// For task 1 of reversing the string
void *task_1(void *name)
{
    char na[30];
    strcpy(na, name);
    char Name[3][10];
    int i = 2;
    int j = 0;
    for (int k = 0; k < strlen(na); k++)
    {
        if (na[k] == ' ')
        {
            i--;
            j = 0;
        }
        else
        {
            Name[i][j] = na[k];
            j++;
        }
    }
    printf("The reversed name : ");
    for (int k = 0; k < 3; k++)
    {
        printf("%s", Name[k]);
        printf(" ");
    }
}

// For task 2 of different permutations
void sort_str(char *str);
void Permutations(char *str);

void *task_2(void *name)
{
    char Name[30];
    strncpy(Name, name, 4);
    printf("\nThe permutations are : \n");
    Permutations(Name);
}

void PermutationsRecur(char *str, char *data, int last, int index)
{

    int i, len = strlen(str);

    for (i = 0; i < len; i++)
    {
        data[index] = str[i];

        if (index == last)
            printf("%s\n", data);
        else
            PermutationsRecur(str, data, last, index + 1);
    }
}

void Permutations(char *str)
{
    int len = strlen(str);

    char *data = (char *)malloc(sizeof(char) * (len + 1));
    data[len] = '\0';

    sort_str(str);

    PermutationsRecur(str, data, len - 1, 0);

    free(data);
}

void swap_permutations(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sort_str(char *str)
{
    for (int i = 0; i < strlen(str) - 1; i++)
        for (int j = i + 1; j < strlen(str); j++)
            if (str[i] > str[j])
                swap_permutations(&str[i], &str[j]);
}

// For task 3 of rearranging
char *rearrange(char str[], int d);

void *task_3(void *name)
{
    char Name[30];
    strcpy(Name, name);
    char FName[30];
    int i = 0;
    for (int i = 0; i < strlen(Name); i++)
    {
        if (Name[i] == ' ')
            break;

        FName[i] = Name[i];
    }
    rearrange(FName, 4);
}

typedef struct charFreq
{
    char c;
    int f;
} charFreq;

void swap_DistanceApart(charFreq *x, charFreq *y)
{
    charFreq z = *x;
    *x = *y;
    *y = z;
}

void maxHeapify(charFreq freq[], int i, int heap_size)
{
    int l = i * 2 + 1;
    int r = i * 2 + 2;
    int largest = i;
    if (l < heap_size && freq[l].f > freq[i].f)
        largest = l;
    if (r < heap_size && freq[r].f > freq[largest].f)
        largest = r;
    if (largest != i)
    {
        swap_DistanceApart(&freq[i], &freq[largest]);
        maxHeapify(freq, largest, heap_size);
    }
}

void buildHeap(charFreq freq[], int n)
{
    int i = (n - 1) / 2;
    while (i >= 0)
    {
        maxHeapify(freq, i, n);
        i--;
    }
}

charFreq extractMax(charFreq freq[], int heap_size)
{
    charFreq root = freq[0];
    if (heap_size > 1)
    {
        freq[0] = freq[heap_size - 1];
        maxHeapify(freq, 0, heap_size - 1);
    }
    return root;
}

char *rearrange(char str[], int d)
{
    int n = strlen(str);

    charFreq freq[MAX] = {{0, 0}};

    int m = 0;

    for (int i = 0; i < n; i++)
    {
        char x = str[i];

        if (freq[x].c == 0)
        {
            freq[x].c = x;
            m++;
        }

        (freq[x].f)++;
        str[i] = '\0';
    }

    buildHeap(freq, MAX);

    for (int i = 0; i < m; i++)
    {
        charFreq x = extractMax(freq, MAX - i);

        int p = i;
        while (str[p] != '\0')
            p++;

        for (int k = 0; k < x.f; k++)
            str[p + d * k] = x.c;
    }

    printf("\nThe word after rearrangement : %s\n", str);
}
