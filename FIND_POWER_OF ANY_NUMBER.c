/*C PROGRAM TO FIND THE POWER OF ANY NUMBER */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;//defining and intializing variable
    printf("enter the number you want to find power:");
    scanf("%d",&a);
    printf("enter raised power number : ");
    scanf("%d",&b);
    c= pow(a,b);//using power math function to calculate the b power 3 i.e 2 power 3 which is equal to 8
    printf("%d raised power %d is :%d",a,b,c);//displaying the output to the console
    return 0;
}
//code contributed by SUHAIL AHMAD PARRAY
