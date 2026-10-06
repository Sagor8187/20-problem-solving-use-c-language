#include <stdio.h>
int main()
{
 int n ,i ;
 printf("Enter a number: ");
    scanf("%d", &n);
 if(n == 1 || n == 0){
    printf("Not prime Number");
  
 }else 
    for(i = 2;i < n/2 ;i++){
        if(n % i == 0){
            printf("Prime number");
            break;
        }
        else 
        printf("not prime ");
        break;
    }
 
}