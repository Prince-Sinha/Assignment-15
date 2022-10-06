#include<stdio.h>
void uniqueelement(int a[],int n);
int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of n sized array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    uniqueelement(a,n);
    return 0;
}
void uniqueelement(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j])
               break;
        }
        if(i==j)
         printf("%d ",a[i]);
    }
}