#include<stdio.h>

int greatestelement(int *a,int n){
    int max,i;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i])
          max=a[i-1];
        else
           max=a[i];
    }
    return max;

}
int main(){
    int n,i,b;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=greatestelement(a,n);
    printf("%d",b);
    return 0;
}