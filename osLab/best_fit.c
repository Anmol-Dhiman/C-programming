
#include <stdio.h>
#include <string.h>

void bestFit(int blockSize[], int m, int fileSize[],
             int n)
{

    int allocation[n];

    for (int i = 0; i < n; i++)
        allocation[i] = -1;

    for (int i = 0; i < n; i++)
    {

        int bestIdx = -1;
        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= fileSize[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blockSize[bestIdx] > blockSize[j])
                    bestIdx = j;
            }
        }

        if (bestIdx != -1)
        {

            allocation[i] = bestIdx;

            blockSize[bestIdx] -= fileSize[i];
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock no.");
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
    scanf("%d", &n);

    int blockSize[m];
    int fileSize[n];

    printf("Enter the block Size : ");
    for (int i = 0; i < m; i++)
    {
        printf("Block %d:", i);
        scanf("%d", &blockSize[i]);
        
    }

    printf("Enter the file Size : ");
    for (int i = 0; i < n; i++)
    {
        printf("File %d:", i);
        scanf("%d", &fileSize[i]);
    }
    bestFit(blockSize, m, fileSize, n);
    return 0;
}
