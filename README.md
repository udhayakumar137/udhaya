
#include <stdio.h>
void main()
{
    int unit;
    float amount=0;
    printf ("enter the units");
    scanf("%d",&unit);
    if(unit<=50)
    amount=(unit*0.50);
    else if(unit>50&&unit<=150)
    amount=((50*0.50)+(unit-50)*0.75);
    else if(unit>150&&unit<=250)
    amount=((50*0.50)+(100*0.75)+(unit-150)*1.20);
    else if(unit>250)
    amount=((50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50);
    printf("the amount is %f",amount);
}
