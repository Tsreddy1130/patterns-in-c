// Online C compiler to run C program online
#include <stdio.h>

int main() {
  //holow triangle
  
  int r,c;
  printf("Enter rows and coloumns:");
  scanf("%d %d",&r,&c);
  for(int i=1;i<=r;i++){
    if(i==1 || i==r){
        for(int j=1 ;j<r;j++){
            printf("* ");
        }printf("\n");
    }else{
        for(int j=1;j<=c;j++){
            if(j==1 || j==c){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }   
  }
}
  
  
  
