#include <stdio.h>
int main()
{
    int n , orgnum,reverse=0,remainder;

    printf("Enter the value of n :");
    scanf("%d",&n);
    orgnum = n;
    while(n!=0){
        remainder = n %10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if(orgnum == reverse){
        printf("Pelindrom Number ");
    }else{
        printf("Not Pelindrome Number");
    }
} 