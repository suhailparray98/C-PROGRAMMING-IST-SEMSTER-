/* C PROGRAM TO CALCULATE THE AVERAGE OF THE AGES OF THREE PERSONS*/
#include<stdio.h>
int main()
{
    float age1,age2,age3,average; //DELCARING THREE AGE VARIABLES ALONG WITH AVERAGE CALCULATING VARIABLE
    printf("enter the ages of three persons:\n");//ask the user to enter the value of the ages of three persons
    scanf("%f%f%f",&age1,&age2,&age3);//reading input from the user
    average=(age1+age2+age3)/3;//putting the value of the average logic from right to left by assigning it into average variable
    printf("average of three ages is %f",average);//printing value to the console
    return 0;
}

//code contributed by suhail ahmad parray
