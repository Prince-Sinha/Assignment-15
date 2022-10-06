#include<stdio.h>
void mergeinsortedorder(int *a,int *b,int n){
    int i,j,c[2*n];
    for(i=0;i<2*n;i++){
        if(i<n)
          c[i]=a[i];
        else
          c[i]=b[i-n];
    }
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(c[i]<c[j]){
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<2*n;i++){
        printf("%d ",c[i]);
    }
}
int main(){
    int n,i;
    printf("Enter the size of two array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the element of first array: ");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
      printf("Enter the elemnt of second array: ");
    for(i=0;i<n;i++){
      scanf("%d",&b[i]);
    }  
    mergeinsortedorder(a,b,n);
    return 0;
}