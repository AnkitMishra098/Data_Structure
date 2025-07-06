#include<stdio.h>
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void selectionsort(int a[],int n){
      int i,j,temp,min;
      for ( i = 0; i < n-1; i++)
      {   min=i;
         for ( j = i+1; j < n; j++)
         {
              if(a[j]<a[min]){
                min=j;
              }
         }
         //swap
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
    } 
}
int main(){
    int a[]={2,7,4,9,76,45};
    int n=6;
    printarray(a,n);
    selectionsort(a,n);
    printf("\nafter sorting\n ");
    printarray(a,n);
}
