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

void genaratebillfotter ( int dis, int total){
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nDiscount\t\t\t%d%%", dis);
    printf("\nDiscount Amount\t\t%d", (total/100)*dis);
    printf("\nTotal Amount\t\t%d", total-((total/100)*dis));
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

int main()
{
    int pw;
    int opt;
    char cn[50];
    int cq;
    printf("Enter pincode :");
    
    scanf("%d",&pw);

    if (pw==1234){
        printf("\tBilling System by Loch");
        printf("\n\t ===================");
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

        switch (opt)
        {
        case 1:

            system("clear");
            printf("\tBilling System by Loch");
            printf("\n\t ===================");
            printf("\n\n");
            printf("~~~~Add new bill~~~~");
            printf("\n\n");
            printf(" Please enter cusmoter name: ");
            scanf("%s",&cn);
            printf("n/ Please enter Number Of items to enter ");
            scanf("%d",&cq);
            

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

