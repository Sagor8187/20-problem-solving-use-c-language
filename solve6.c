#include <stdio.h>
int main()
{
    int n , a[100] ,max,i ;
    printf("Enter The size of array : ");
    scanf("%d", &n);
    for(i = 0 ; i < n;i++){
        scanf("%d",&a[i]);
    }
     max = a[0];
    for(i = 0; i< n;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("The max number is : %d",max);
   
} 