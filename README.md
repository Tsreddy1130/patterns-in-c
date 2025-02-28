# patterns-in-c




// Online C compiler to run C program online
```
* * * 
*   * 
*   * 
* * * 
```

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

// Online C compiler to run C program online
#include <stdio.h>

// * * * *
// * * *
// * *
// *

int main() {
    int r,c;
    printf("Enter rows and coloumns:");
    scanf("%d %d",&r,&c);
    for(int i =1;i<= r;i++){
        for(int j =1;j<=c;j++){
            if(j<=c-i){
                printf("* ");
            }
        }printf("\n");
    }

}
  
  
// Online C compiler to run C program online
#include <stdio.h>
// * * * *
//   * * *
//     * *
//       *
int main() {
int n;
printf("Enter rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i==1){
    for(int j=1;j<=n;j++){
        printf("* ");
    }printf("\n");
        
    }else{
        for(int j =1;j<=n;j++){
            if(j<=i-1)
            printf("  ");
            else
            printf("* ");
            
        }printf("\n");
    }
}

    return 0;
}  


#include <stdio.h>

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%d ",i);
       }printf("\n");
   }

    return 0;
}


#include <stdio.h>

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 


int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%d ",j);
       }printf("\n");
   }

    return 0;
}


#include <stdio.h>

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

   for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i+1;j++){
           printf("%d ",j);
       }printf("\n");
   }

    return 0;
}



#include <stdio.h>
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// F F F F F F 
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    int ch = 'A';
    n=n+ch;
    for(int i =ch;i<=n;i++){
        for(int j =ch;j<=i;j++){
            printf("%c ",i);
        }printf("\n");
    }


}





#include <stdio.h>
// A B C D E 
//   F G H I 
//     J K L 
//       M N 
//         O 

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    int ch = 'A';
    
    for(int i =1;i<=n;i++){
        
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int j =i;j<=n;j++){
            printf("%c ",ch);
            ch++;
        }printf("\n");
    }
}

#include <stdio.h>
// A B C D E 
// 2 2 2 2 
// C D E 
// 4 4 
// E 
 
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    int ch = 'A';
    n=n+ch;
    for(int i =ch;i<n;i++){
        for(int j =i;j<n;j++){
            if(i%2==1)
            printf("%c ",j);
            else
            printf("%d ",i-ch+1);
        }printf("\n");
    }


}
