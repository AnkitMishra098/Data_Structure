#include <stdio.h>
#include <conio.h>
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void heapify(int a[],int n,int i){
    int large=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && a[large]<a[left]){
           large=left;
    }
    if(right < n && a[large] < a[right]){
           large=right;
    }
    if(large!=i)
    {
        int temp=a[large];
        a[large]=a[i];
        a[i]=temp;
        heapify( a, n,large);
    }
}
void heapsort(int a[],int n){
    
   for(int i=n;i>=0;i--){
      heapify( a, n,i);
   }
      for ( int i = n-1; i >=0; i--)
      {
         int temp=a[0];
         a[0]=a[i];
         a[i]=temp;
         heapify( a, i, 0);
      }
      
   
}
int main()
{
    int a[] = {7, 3, 8, 6, 23, 9, 2, 98};
    int n = 8;
    printarray(a, n);
    printf("\nafter sorting\n");
    heapsort(a,n);
    printarray(a, n);
    return 0;
}