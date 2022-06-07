
#include <stdio.h>
#include <string.h>
 

void NextFit(int blockSize[], int m, int fileSize[], int n)
{

    int allocation[n], j = 0;

    memset(allocation, -1, sizeof(allocation));

    for (int i = 0; i < n; i++)
    {

        while (j < m)
        {

            if (blockSize[j] >= fileSize[i])
            {

                allocation[i] = j;

                blockSize[j] -= fileSize[i];

                break;
            }

            j = (j + 1) % m;
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t\t %d \t\t", i + 1, fileSize[i]);

        if (allocation[i] != -1)
            printf("%d ", allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}

int main()
{

    int m, n;
    printf("Enter the number of blocks input : ");
    scanf("%d", &m);

    printf("Enter the number of flies input : ");
    scanf("%d", &m);

    int blockSize[m];
    int fileSize[n];

    printf("Enter the block Size : ");
    for (int i = 1; i <= m; i++)
    {
        printf("Block %d:", i);
        scanf("%d", &blockSize[i]);
    }

    printf("Enter the file Size : ");
    for (int i = 1; i <= n; i++)
    {
        printf("Block %d:", i);
        scanf("%d", &fileSize[i]);
    }

    NextFit(blockSize, m, fileSize, n);

    return 0;
}
