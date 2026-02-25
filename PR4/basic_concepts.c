#include <stdio.h>
#include <string.h>

int main() {
    int n, sum =0 ;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    char name[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of element %d: ", i + 1);
        scanf("%s", name[i]);
    }

    printf("The names of the elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", name[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    

    return 0;
}