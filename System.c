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

void genaratebillbody ( int qty,char item[50], int price){
    printf("\n%d", qty);
    printf("\t\t%s",item);
    printf("\t\t%d", price);
}

int main()
{

int a;
genaratebillheader ("abc", "hsja");
genaratebillbody ( 5,"aaaa", 567);
return(0);

}