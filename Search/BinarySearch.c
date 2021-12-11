// Binary Search is done by dividing array into parts : (Iterative)
// Algorithm Implimentation :
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Omega[10], target, j = 1;

    for (int i = 0; i < 10; i++)
    {
        Omega[i] = 2 * j;
        j++;
        printf("%d\n", Omega[i]);
    }

    printf("Enter the element you are searching for :\n");
    scanf("%d", &target);

    int start = 0, ending = 9, mid;

    while (start <= ending)
    {
        mid = (start + ending) / 2;
        if (target == Omega[mid])
        {
            printf("Target found at location %d !!\n", mid);
            break;
        }
        if (target > Omega[mid])
        {
            start = mid + 1;
        }
        else
        {
            ending = mid - 1;
        }
    }

    return 0;
}