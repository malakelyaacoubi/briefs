#include <stdio.h>
int pgmc1(int a[], int n1){
    int i;
    int max = a[0];
    for (i = 0; i < n1; i++)
        if (a[i] > max)
            max = a[i];
    return max;}
int ppmc1(int a[], int n1){
    int i;
    int min = a[0];
    for (i = 0; i < n1; i++)
        if (a[i]< min)
            min = a[i];
    return min;}
int pgmc2(int b[], int n2){
    int i;
    int max = b[0];
    for (i = 0; i < n2; i++)
        if (b[i] > max)
            max = b[i];
    return max;}
int ppmc2(int b[], int n2){
    int i;
    int min = b[0];
    for (i = 0; i < n2; i++)
        if (b[i]< min)
            min = b[i];
    return min;}
int elevevalide1(int a[],int n1){
  int i;
  int c=0;
  for ( i=0; i<n1; i++)
    if (a[i]>=10) {c++;}
  return c;}
int elevevalide2(int b[],int n2)
{int i;
  int c=0;
  for ( i=0; i<n2; i++)
    if (b[i]>=10) {c++;}
  return c;}

int main(){
    int n1,n2,n3;           
    int a[20], b[20], c[30];
    
    printf("Entrer le nombre d'eleves: ");
    scanf("%d",&n1);
    printf("Entrer les notes : ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
  
    printf("La plus grande moyenne est: %d\n", pgmc1(a, n1));
    printf("La plus petite moyenne est: %d\n", ppmc1(a, n1));
    printf("le nombre d'etudiants qui ont valide est :%d\n", elevevalide1(a, n1));
   
   
   printf("Entrer le nombre d'eleves: ");
        scanf("%d",&n2);
    printf("Entrer les notes: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
       
    printf("La plus grande moyenne est: %d\n", pgmc2(b, n2));
    printf("La plus petite moyenne est: %d\n", ppmc2(b, n2));
    printf("le nombre d'etudiants qui ont valide est :%d\n", elevevalide2(b, n2));
    
    
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       c[i] = a[i];
    for(int i = 0; i < n2; i++)     
        c[i + n1] = b[i];    
    printf("la totalite des notes : ");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);        
    printf("\ntri des notes par ordre croissant: ");
    for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;}
        }
    }   
    for(int i = 0; i < n3 ; i++)      
        printf(" %d ",c[i]);
    return 0;   
}