// Linear Search is done by visiting each element : (Iterative)
// Algorithm Implimentattion
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    printf("\n\n");

    printf("Enter the element you are searching for :\n");
    scanf("%d", &target);

    for (int i = 0; i < 10; i++)
    {
        if (Omega[i] == target)
        {
            printf("Target found ! Location %d\n", i);
        }
    }

    return 0;
}