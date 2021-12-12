// Linear Search with Recursion
// Algorithm Implementation :
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int search(int i, int Arr[], int target);
int main()
{
    int Omega[10], target;
    time_t t;
    srand((unsigned)time(&t));

    for (int i = 0; i < 10; i++)
    {
        Omega[i] = rand() % 100;
        printf("%d\n", Omega[i]);
    }
    printf("\n");
    printf("Enter target :\n");
    scanf("%d", &target);
    printf("\n");
    search(0, Omega, target);
    return 0;
}
int search(int i, int Arr[], int target)
{
    if (i < 10)
    {
        if (target == Arr[i])
        {
            printf("MF found at %d\n", i);
        }
        return search(i + 1, Arr, target);
    }

    return 0;
}