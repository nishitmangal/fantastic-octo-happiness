//Ques 10
#include <stdio.h>
int main(){
float gross, basic, DA, HRA;

printf("Enter the basic salary of employee \n");
scanf("%f", & basic);

if(basic<=10000)
{
    DA=0.20*basic;
    HRA=0.80*basic;
    printf("DA=%f \nHRA=%f \n", DA,HRA);
    printf("Gross Salary=%f", basic+DA+HRA);
}
else if(basic<=20000 && basic>10000)
{
    DA=0.25*basic;
    HRA=0.90*basic;
    printf("DA=%f \nHRA=%f \n", DA,HRA);
    printf("Gross Salary=%f", basic+DA+HRA);
}
else
{

    DA=0.30*basic;
    HRA=0.95*basic;
    printf("DA=%f \nHRA=%f \n", DA,HRA);
    printf("Gross Salary=%f", basic+DA+HRA);
}

return 0;

}
