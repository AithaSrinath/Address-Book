#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "contact.h"

void search_Contact(AddressBook *addressBook)
{
     int option;

         printf("Choose the option\n");
         printf("\n");
         printf("1. search name\n");
         printf("2. search phone number\n");
         printf("3. search email\n");

         scanf("%d", &option);
    
    switch(option)
    {
        case 1:
            search_name(addressBook);
            break;
        case 2:
            search_phone(addressBook);
            break;
        case 3:
            search_email(addressBook);
            break;
        default: 
             printf("Choose valid option");
    }     
}



  //SEARCH_NAME
void search_name(AddressBook *addressBook)       
{
    char name[50];
    int i;
    int found = 0;
     printf("Enter name that you want to search :");
     scanf(" %49[^\n]",name);

     for(int i=0; i<addressBook->contactCount; i++)
    {
         if(strstr(addressBook->contacts[i].name,name) != NULL)
         {
            printf("\nContact Found\n");
            printf("%-10s%-20s%-20s%-25s\n","S.N0", "Name", "Phone no", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            found = 1;
        }
    }
     if(found == 0)
     {
        printf("Contact not found.\n");
     }  
}




  // SEARCH_PHONE
void search_phone(AddressBook *addressBook)       
{
    char number[11];
    int i;
    int found = 0;
     printf("Enter Number that you want to search :");
     scanf(" %10[^\n]",number);

    for(int i=0; i<addressBook->contactCount; i++)
    {
         if(strcmp(addressBook->contacts[i].phone,number) == 0)
         {
            printf("\nContact Found\n");
            printf("%-10s%-20s%-20s%-25s\n","S.N0", "Name", "Phone no", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            found = 1;
        }
    }
     if(found == 0)
     {
          printf("Contact not found.\n"); 
     }
}



   // SEARCH_EMAIL
   void search_email(AddressBook *addressBook)       
{
    char email[50];
    int i;
    int found = 0;
     printf("Enter Email that you want to search :");
     scanf(" %49[^\n]",email);

    for(int i=0; i<addressBook->contactCount; i++)
    {
         if(strcmp(addressBook->contacts[i].email, email) == 0)
         {
            printf("\nContact Found\n");
            printf("%-10s%-20s%-20s%-25s\n","S.N0", "Name", "Phone no", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            found = 1;
        }
    }
     if(found == 0)
     {
          printf("Contact not found.\n"); 
     }
}


// // Dummy contact data
// static Contact dummyContacts[] = {
//     {"John Doe", "1234567890", "john@example.com"},
//     {"Alice Smith", "0987654321", "alice@example.com"},
//     {"Bob Johnson", "1112223333", "bob@company.com"},
//     {"Carol White", "4445556666", "carol@company.com"},
//     {"David Brown", "7778889999", "david@example.com"},
//     {"Eve Davis", "6665554444", "eve@example.com"},
//     {"Frank Miller", "3334445555", "frank@example.com"},
//     {"Grace Wilson", "2223334444", "grace@example.com"},
//     {"Hannah Clark", "5556667777", "hannah@example.com"},
//     {"Ian Lewis", "8889990000", "ian@example.com"}
// };

// void populateAddressBook(AddressBook* addressBook)
// {
//     int numDummyContacts = sizeof(dummyContacts) / sizeof(dummyContacts[0]);
//     for (int i = 0; i < numDummyContacts && addressBook->contactCount < MAX_CONTACTS; ++i) {
//         addressBook->contacts[addressBook->contactCount++] = dummyContacts[i];
//     }
// }