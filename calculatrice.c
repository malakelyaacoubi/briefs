#include <stdio.h>
#include <stdlib.h>
 void main ()
 {
  int A,B ;
  char op ;
  
  printf(" entrer l'operation:");
  scanf("%s",&op);
  
  
switch (op)
  {
  case '+':
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre B:");
  scanf("%d",&B);
  printf("%d", A+B);
  break;
  
  case '-':
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre B:");
  scanf("%d",&B);
  printf("%d", A-B);
  break;
  
  case '*':
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre B:");
  scanf("%d",&B);
  printf("%d", A*B);
  break;
  
  case '/':
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre B:");
  scanf("%d",&B);
  if ( B != 0)
  {
    printf("%d",A/B);
    }
 else 
  {
    printf("ERROR");
    }
  break;
  case 'q':
  printf("End of the program....\n");
   exit(0);
   
  break;
  
  default:
  printf("OPERATION NON RECONNU!!!!!");

    break;
  } 


  }