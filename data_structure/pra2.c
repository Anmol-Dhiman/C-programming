#include <stdio.h>
#define true 1
 
int isPairSum(int A[],int  N,int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            // as equal i and j means same element
            if (i == j)
                continue;
           
            // pair exists
            if (A[i] + A[j] == X)
                return true;

            // as the array is sorted
            if (A[i] + A[j] > X)
                break;
        }
    }
 
    // No pair found with given sum.
    return 0;
}
 
// Driver Code
int main()
{
    int arr[]={3,5,9,2,8,10,11};
    int val=17;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
   
    // Function call
    printf("%d",isPairSum(arr,arrSize,val));
 
    return 0;
}