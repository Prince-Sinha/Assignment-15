#include<stdio.h>
void frequencycount(int *a,int n){
    int count;
    int j,i,k,v=-1,fr[n];
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
               count++; 
               fr[j] =v;
            } 
            }
            if(fr[i]!=v){
                fr[i]=count;
                printf("%d ", a[i]);       
                printf(" %d\n", fr[i]); 
            }
    }
}
int main(){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    frequencycount(a,n);

    return 0;
}