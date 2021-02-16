#include<stdio.h>
int main()
{

    int ren,x,rev,no;
    printf("enter no to be checked: ");
    scanf("%d",&x);
    no=x;
    while(x)
    {
        ren=x%10;
        rev=rev*10 + ren;
        x=x/10;
    }
    if(no==rev)
        printf("\nPALINDROME!");
    else
        printf("\n NOT A PALINDROM");
    return 0;

}
