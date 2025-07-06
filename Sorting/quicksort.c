#include<stdio.h>
void printarray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int partition(int a[],int low,int high){
    int pi=a[low];
    int i=low+1,j=high;
do
  {
    while(a[i] <pi){
        i++;
    }
    while(a[j] > pi){
        j--;
    }
    if(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i<j);
int temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
    
}
void quicksort(int a[],int low,int high){
      int pi;
      if(low < high)
      {
        pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
      }
}

int main(){
    int a[]={2,7,4,9,6,1,76,45};
    int n=8;
    printarray(a,n);
    quicksort(a,0,n-1);
    printarray(a,n);
    return 0;
}
