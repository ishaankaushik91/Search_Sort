// Binary Search Recursively
#include <stdio.h>
int assign(int Arr[], int target);
int search(int Arr[], int l, int h, int t);
int main()
{
    int Arr[100], lower = 0, upper = 9, middle, target;
    assign(Arr, target);
    printf("\n");
    printf("Enter target :\n");
    scanf("%d", &target);
    search(Arr, lower, upper, target);
    return 0;
}
int assign(int Arr[], int target)
{
    for (int i = 0; i < 10; i++)
    {
        Arr[i] = (i + 1) * 3;
        printf("%d\n", Arr[i]);
    }
    printf("\n");
    return 0;
}
int search(int Arr[], int l, int h, int t)
{
    if (l <= h)
    {
        int m = (l + h) / 2;
        if (Arr[m] == t)
        {
            printf("Target found at %d\n", m);
            return 0;
        }
        if (Arr[m] > t)
        {
            return search(Arr, l, m - 1, t);
        }
        return search(Arr, m + 1, h, t);
    }

    return -1; 
}