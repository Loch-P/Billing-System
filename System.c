#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//functions to genarate the bills
void genaratebillheader (char name[50], char date[30]){
    printf("\tBilling System by Loch");
    printf("\n=========================================");
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

void genaratebillfotter ( int dis, int total){
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nDiscount\t\t\t%d%%", dis);
    printf("\nDiscount Amount\t\t%d", (total/100)*dis);
    printf("\nTotal Amount\t\t%d", total-((total/100)*dis));
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

//structures

struct item
{
    char iname[50];
    int iqty;
    float iprice;
};

struct order
{
    char cname[50];
    char date[15];
    int noofitems;
    struct item itm[];

};


int main()
{
    int pw;
    int opt;
    char cn[50];
    int cq;
    int w;
    struct order ord;
    struct item item;

    printf("Enter pincode :");
    
    scanf("%d",&pw);

    if (pw==1234){
        printf("\tBilling System by Loch");
        printf("\n=========================================");
        printf("\n\n");
        printf("You are successfully login to the system");
        printf("\n\n");
        printf(" Please select your preferred operation");
        printf("\n\n");
        printf("1.New bill");
        printf("\n2.All bills");
        printf("\n3.Search bills");
        printf("\n4.Log out");
        printf("\n\n");
        printf("Your choice: ");
        scanf("%d",&opt);
        fgetc(stdin);
        switch (opt)
        {
        case 1:

            system("clear");
            printf("\tBilling System by Loch");
            printf("\n=========================================");
            printf("\n\n");
            printf(">>>Add new bill");
            printf("\n\n");
            printf("Please enter cusmoter name: ");
            fgets(ord.cname,50,stdin);
            ord.cname[strlen(ord.cname)-1]=0;
            strcpy(ord.date,__DATE__);
            printf("Please enter Number Of items to enter ");
            scanf("%d",&cq);

            for (w=0; w<cq; w++) {
                fgetc(stdin);
                printf("Please enter name of item number %d :", w+1);
                fgets(ord.itm[w].iname,50,stdin);
                printf("Please enter the quantity :");
                scanf("%d", &ord.itm[w].iqty);
                printf("Please enter the unit price :");
                scanf("%f", &ord.itm[w].iprice);

            }


            break;
        
        case 2:
            printf("Your choice: 2 ");
            break;
        
        case 3:
            printf("Your choice: 3 ");
            break;
        
        case 4:
            printf("Your choice: 4 ");
            break;
        
        default:
            break;
        }

    }
    else {
        printf("Your pincode is wrong. Please try again");
    }

    return(0);}

