#include<stdio.h>
void rotate(int *a,int n,int n1,char d){
  int i,j;
  switch (d)
  {
  case 'R' :for(i=0;i<n1;i++){
  for(j=0;j<n-1;j++){
    int temp=a[n-1];
    a[n-1]=a[j];
    a[j]=temp;
  }
 }
 for(i=0;i<n;i++){
  printf("%d ",a[i]);
 }
    break;
  
  case 'L': 
  for(i=0;i<n1;i++){
  for(j=n-1;j>=1;j--){
    int temp=a[0];
    a[0]=a[j];
    a[j]=temp;
  }
 }
 for(i=0;i<n;i++){
  printf("%d ",a[i]);
 }
    break;
  }
}
int main(){
 int n,n1,i,j;
 char d;
 printf("Enter the size of array : ");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 printf("Enter the position by shifting to be done : ");
 scanf("%d",&n1);
 printf("Enter the direction L/R : ");
 scanf(" %c",&d);
 rotate(a,n,n1,d);

  return 0;
}