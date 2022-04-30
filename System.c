#include<stdio.h>
#include<string.h>

//functions to genarate the bills
void genaratebillheader (char name[50], char date[30]){
    printf("\tBilling System by Loch");
    printf("\n\t ===================");
    printf("\nDate:        %s", date);
    printf("\nInvoice to:  %s ", name);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nQTY");
    printf("\t\tITEM");
    printf("\t\tPRICE");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


int main()
{

int a;

genaratebillheader ("abc", "hsja");

return(0);
}