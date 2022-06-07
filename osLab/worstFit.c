
#include <stdio.h>
#include <string.h>

void worstFit(int blockSize[], int m, int fileSize[],
              int n)
{

    int allocation[n];

    memset(allocation, -1, sizeof(allocation));

    for (int i = 0; i < n; i++)
    {

        int wstIdx = -1;
        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= fileSize[i])
            {
                if (wstIdx == -1)
                    wstIdx = j;
                else if (blockSize[wstIdx] < blockSize[j])
                    wstIdx = j;
            }
        }

        if (wstIdx != -1)
        {

            allocation[i] = wstIdx;
            blockSize[wstIdx] -= fileSize[i];
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

// Driver code
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

    worstFit(blockSize, m, fileSize, n);

    return 0;
}
