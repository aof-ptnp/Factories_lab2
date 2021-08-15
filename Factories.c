#include <stdio.h>

int main(){
  int i,x;
  printf("Enter number : ");
  scanf("%d", &x);
  printf("Factoring result : ");
  for(i=2;i<x;i++)
  {
    if(x%i==0){
        printf("\t%d\tx",i);
        x = x/i;
        i = 1;
    }
    
  }
  if(i==x){
        printf("\t%d",x);
  }
  return 0;

}