
//wc=O(n^2),avg case=O(n^2),best case =O(n)
#include <stdio.h>
#include <conio.h>
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {7, 3, 8, 6, 23, 9, 2, 98};
    int n = 7;
    printarray(a, n);
    printf("\nafter sorting\n");
    bubble(a, n);
    printarray(a, n);
}