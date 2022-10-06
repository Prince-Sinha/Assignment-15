#include<stdio.h>
int duplicatearray(int *a,int n){
    int i,j,count,sum=0;
    for(i=0;i<n-1;i++){
         count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
              count++;
               break;}
        else{
            count=0;
        }
        }
        sum+=count;
    }
    return sum;
}

int main(){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b = duplicatearray(a,n);
    printf("The total number of duplicate elemnt is %d ",b);

    return 0;
}