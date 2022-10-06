#include<stdio.h>
int Sortedarray(int a[],int n){
    int temp,j,i,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }

   for(k=0;k<n;k++){
    printf("%d ",a[k]);
   }
}
int main(){
    int n,i;
    int *p;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of n sized array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Sortedarray(a,n);
    
    return 0;
}