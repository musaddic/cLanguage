#include <stdio.h>
#include <string.h>

struct order
{
    int orderNumber;
    int quantity;
    int price;
};
typedef struct order orderData;


typedef struct info
{
    char name[100];
    char address[300];
    char dob[20];
    char occupation[100];
    char phone_number[20];
    char email_address[100];
    int id;

}customer_info;

void orderInfo();
void customer_info_collection();
void customer_info_check();
void customer_info_search(int id_search);
void items ();
int change_Pin();

int main()
{
    int choice, pin, check, id_search;
    printf("F O O D - O - H O L I C");
    printf("\n\nWelcome to your online food portal\n\n");
    printf("HOME PAGE>>\n");
    printf("\t1. Register\n\t2. Place Order\n\t3. Admin Login\n\t4. Exit\n");
    printf("Enter your selection>> ");
    fflush(stdin);
    scanf("%d", &choice);

    while (1)
    {
        if (choice==1)
        {
            system("cls");
            customer_info_collection();
            printf("Registration Successful!\n");
            printf("Press 1 to exit>>");
            scanf("%d", &check);
            if (check==1)
                system("cls");
                main();
        }
        else if (choice==2)
        {
            orderInfo();
            printf("\t1. Order again\n\t2. Return to home Page\n");
            printf("Enter your selection>> ");
            scanf("%d", &check);
            if (check==1)
                orderInfo();
            else
                system("cls");
                main();
        }
        else if (choice==3)
        {

            FILE *fp;
            fp=fopen("pin.txt", "r");
            fscanf(fp, "%d", &pin);
            fclose(fp);

            printf("Enter your pin: ");
            scanf("%d", &check);
            if (check==pin)
            {
                system("cls");
                printf("Admin Panel>>\n\t1. View Customer Information[ALL]\n\t2. View Specific Customer Information\n\t3. Change Pin\n");
                printf("Enter your selection>> ");
                fflush(stdin);
                scanf("%d", &check);
                if(check==1)
                {
                    system("cls");
                    customer_info_check();
                    printf("\nPress 1 to exit>>");
                    scanf("%d", &check);
                    if (check==1)
                    system("cls");
                    main();

                }
                else if (check==2)
                {
                    printf("Enter Customer ID: ");
                    scanf("%d", &id_search);
                    customer_info_search(id_search);
                }
                else if (check==3)
                {
                    system("cls");
                    printf("Enter existing pin: ");
                    scanf("%d", &check);
                    if(check==pin)
                    {
                        pin = change_Pin();
                    }

                }

            }
            else
            {
                printf("Invalid Pin! Access Denied!!");
                printf("\nPress 1 to exit>>");
                scanf("%d", &check);
                if (check==1)
                    system("cls");
                    main();
            }
        }
        else if (choice==4)
        {
            break;
        }

        else
        {
            printf("Invalid Pin! Access Denied!!");
            main();
        }
    }

    printf("\tApplication Terminated\n");
    return 0;
}

void orderInfo()
{
    orderData order[1000];
    int constant = 0, itemAmount, codeNumber, quantity, id_check;
    order[constant].orderNumber = 1000+constant;
    items();
    order[constant].quantity = itemAmount;
    order[constant].price = 0;
    order[constant].quantity = 0;
    printf ("How many items you want to order? ");
    fflush(stdin);
    scanf ("%d", &itemAmount);
    while (itemAmount--)
    {
        int size;
        printf ("\nEnter the code number for the chosen item: ");
        scanf ("%d", &codeNumber);
        switch(codeNumber)
        {
            case 11 : printf ("Enter the size of the Beef burger[1. 250grams  2. 350grams]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (350*quantity);
                }
                else
                {
                    order[constant].price += (480*quantity);
                }
                break;

            case 12 : printf ("Enter the size of the pizza 'Cheese Pizza' [1. 12inches  2. 14inches  3. 16inches]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (750*quantity);
                }
                else if(size==2)
                {
                    order[constant].price += (1000*quantity);
                }
                else
                {
                    order[constant].price += (1250*quantity);
                }
                break;

            case 13 : printf ("Enter the amount of Chicken Broast(s) [1. 1 pcs  2. 4 pcs  3. 10 pcs]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (125*quantity);
                }
                else if(size==2)
                {
                    order[constant].price += (450*quantity);
                }
                else
                {
                    order[constant].price += (1100*quantity);
                }
                break;

            case 14 : printf ("Enter the size of Grilled chicken [1. quarter  2. half  3. full]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (270*quantity);
                }
                else if(size==2)
                {
                    order[constant].price += (540*quantity);
                }
                else
                {
                    order[constant].price += (750*quantity);
                }
                break;

            case 15 : printf ("Enter the size of Rice Bowl [1. half  2. full]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (330*quantity);
                }
                else
                {
                    order[constant].price += (550*quantity);
                }
                break;

            case 16 : printf ("Enter the size of Hydrabadi Biriyani [1. half  2. full]: ");
                scanf ("%d", &size);
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                if(size==1)
                {
                    order[constant].price += (230*quantity);
                }
                else
                {
                    order[constant].price += (350*quantity);
                }
                break;

            case 17 : printf ("500 mL of Cold Coffee\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                order[constant].price += (365*quantity);
                break;

            case 18 : printf ("500 mL of Iced Chocolate coffee\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                order[constant].price += (365*quantity);
                break;

            case 19 : printf ("500 mL of Milkshake\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                order[constant].price += (330*quantity);
                break;

            case 20 : printf ("500 mL of Mexican Cola\n");
                printf ("Please enter the quantity: ");
                scanf ("%d", &quantity);
                order[constant].quantity +=quantity;
                order[constant].price += (330*quantity);
                break;

            default : printf ("Invalid selection! Please, try again.\n");
                itemAmount++;
                break;
        }
    }
    system("cls");
    printf("Enter your FOODOHOLIC ID>>");
    scanf("%d", &id_check);
    customer_info_search(id_check);
    printf ("\n\nNumber of items ordered: %d\n", order[constant].quantity);
    printf ("Thank you for your order.\nYour bill is %d Taka only.\nPlease, wait while we prepare the food.\n\n",  order[constant].price);
    constant++;
}


void customer_info_collection()
{
    int count;
    FILE *fp;
    fp = fopen("customer_count.txt", "r");
    fscanf(fp, "%d", &count);
    fflush(stdin);
    customer_info customer[1000];
    printf("Customer Information Form>>\nName: ");
    gets(customer[count].name);
    printf("Address: ");
    gets(customer[count].address);
    printf("Date of Birth: ");
    gets(customer[count].dob);
    printf("Occupation: ");
    gets(customer[count].occupation);
    printf("Phone Number: ");
    gets(customer[count].phone_number);
    printf("E-mail address: ");
    gets(customer[count].email_address);

    customer[count].id = 10000 + count;
    printf("\nYour FOOD-o-HOLIC ID is %d.\n\nPlease save this for further reference.\n\n", customer[count].id);

    FILE *fptr;
    fptr = (fopen("customer_information.txt", "a"));
    if(fptr!=NULL)
    {
        fflush(stdin);
        fprintf(fptr, "%s\n", customer[count].name);
        fprintf(fptr, "%s\n", customer[count].address);
        fprintf(fptr, "%s\n", customer[count].dob);
        fprintf(fptr, "%s\n", customer[count].occupation);
        fprintf(fptr, "%s\n", customer[count].phone_number);
        fprintf(fptr, "%s\n", customer[count].email_address);
        fprintf(fptr, "%d\n", customer[count].id);
    }
    fclose(fptr);
    fclose(fp);

    count++;

    fp = fopen("customer_count.txt", "w");
    fprintf(fp, "%d", count);
    fclose(fp);

}

void customer_info_check()
{
    printf("Stored information of Customers>>");
    int i, count;

    customer_info customer[1000];

    FILE *fp;
    fp = (fopen("customer_count.txt", "r"));
    fscanf(fp, "%d", &count);
    fflush(stdin);
    fclose(fp);

    FILE *fptr;
    fptr = (fopen("Customer_Information.txt", "r"));
    if(fptr!=NULL)
    {
        for(i=1; i<count; i++)
        {
        fgets(customer[i].name, 100, fptr);
        fgets(customer[i].address, 300, fptr);
        fgets(customer[i].dob, 20, fptr);
        fgets(customer[i].occupation, 100, fptr);
        fgets(customer[i].phone_number, 20, fptr);
        fgets(customer[i].email_address, 100, fptr);
        fscanf(fptr, "%d", &customer[i].id);
        getc(fptr);
        }
    }
    for(i=1; i<count; i++)
    {
        printf("\n\nSerial#%d\n", i);
        printf("Name: %s", customer[i].name);
        printf("Address: %s", customer[i].address);
        printf("Date of Birth: %s", customer[i].dob);
        printf("Occupation: %s", customer[i].occupation);
        printf("Phone: %s", customer[i].phone_number);
        printf("e-Mail: %s", customer[i].email_address);
        printf("ID# %d", customer[i].id);
    }

    fclose(fptr);

}

void customer_info_search(int id_search)
{

    int i, count;

    customer_info customer[1000];

    FILE *fp;
    fp = (fopen("customer_count.txt", "r"));
    fscanf(fp, "%d", &count);
    fflush(stdin);
    fclose(fp);

    FILE *fptr;
    fptr = (fopen("Customer_Information.txt", "r"));
    if(fptr!=NULL)
    {
        for(i=1; i<count; i++)
        {
        fgets(customer[i].name, 100, fptr);
        fgets(customer[i].address, 300, fptr);
        fgets(customer[i].dob, 20, fptr);
        fgets(customer[i].occupation, 100, fptr);
        fgets(customer[i].phone_number, 20, fptr);
        fgets(customer[i].email_address, 100, fptr);
        fscanf(fptr, "%d", &customer[i].id);
        getc(fptr);
        if(customer[i].id==id_search)
            break;
        }
    }

    printf("\nCustomer ID#%d Details: \n", id_search);
    printf("Name: %s", customer[i].name);
    printf("Address: %s", customer[i].address);
    printf("Date of Birth: %s", customer[i].dob);
    printf("Occupation: %s", customer[i].occupation);
    printf("Phone: %s", customer[i].phone_number);
    printf("e-Mail: %s", customer[i].email_address);


    fclose(fptr);

}

void items ()
{
    system("cls");
    printf("\n\n...................F O O D -O- H O L I C   M E N U..........................\n\n");
    printf("Item Code#   Description-------------------Size--------------------Price(Taka)\n");
    printf("[11]---------Beef Burger-------------------250/350g----------------350/480\n");
    printf("[12]---------Cheese Pizza------------------12/14/16inches----------750/1000/1250\n");
    printf("[13]---------Chicken Broast----------------1/4/10pieces------------125/450/1100\n");
    printf("[14]---------Grilled Chicken---------------quarter/half/full-------270/540/750\n");
    printf("[15]---------Rice Bowl---------------------Half/Full---------------330/550\n");
    printf("[16]---------Hydrabadi Biriyani------------Half/Full---------------220/350\n");
    printf("[17]---------Cold Coffee-------------------500mL-------------------365\n");
    printf("[18]---------Iced Chocolate Coffee---------500mL-------------------365\n");
    printf("[19]---------MilkShake---------------------500mL-------------------330\n");
    printf("[20]---------Mexican Cola------------------500mL-------------------330\n\n");
}

int change_Pin()
{
    int new_pin;

    printf("Enter New Pin: ");
    scanf("%d", &new_pin);

    FILE *fp;

    fp=fopen("pin.txt", "w");
    fprintf(fp, "%d", new_pin);
    fclose(fp);

    return new_pin;
}
