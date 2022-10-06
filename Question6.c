#include<stdio.h>
void reverseorder(int a[],int n);
int main(){
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    reverseorder(a,n);
    return 0;
}
void reverseorder(int a[],int n){
    int i,j;
    for(i=0;i<n/2;i++){
            int temp=a[n-i-1];
            a[n-i-1]=a[i];
            a[i]=temp;
        
    }
    printf("Array in reverse order :");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
}