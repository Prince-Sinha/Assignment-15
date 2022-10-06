#include<stdio.h>
int firstoccurance(int *a,int n){
    int i,j,fr[n],v=-1;
    for(i=0;i<n;i++){

        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                fr[j]=v;
                break;
        }
        if(fr[i]!=v){
                fr[i]=a[i];
                printf("\nThe first occurance of %d is %d",fr[i],j+1);
        }

    }
}
int main(){
   int n,i;
   printf("Enter the size of an array: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the element of an array: ");
   for(i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
   firstoccurance(a,n);
    return 0;
}