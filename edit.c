#include <stdio.h>
#include<string.h>
#include"contact.h"
//#include "file.h"

void edit_Contact(AddressBook *addressBook)
{
     int option;

      if(addressBook->contactCount == 0)
      {
         printf("\nContact list is empty. Nothing to edit.\n");
         return;
      }
      printf("\nHow do you want to search the contact?\n");
      printf("1. Search by Name\n");
      printf("2. Search by Phone Number\n");
      printf("3. Search by Email\n");

      printf("Enter Your choice: ");
      scanf("%d", &option);

      switch(option)
      {
         case 1:
             edit_name(addressBook);
             break;
         case 2:
             edit_phone(addressBook);
             break;
         case 3:
              edit_email(addressBook);
              break;
         default:
               printf("Invalid choice.\n");           
      }
}




// EDIT_NAME
void edit_name(AddressBook *addressBook)
{
     char name[50];
     char Newname[50];
     int i;

     printf("\nEnter Name to edit: ");
     scanf(" %49[^\n]", name);

     for(int i=0; i<addressBook->contactCount; i++)
     {
        if(strcmp(addressBook->contacts[i].name, name) == 0)
        {
            printf("\nContact found\n");

            printf("Name  : %s\n", addressBook->contacts[i].name);
            printf("Phone : %s\n", addressBook->contacts[i].phone);
            printf("Email : %s\n", addressBook->contacts[i].email);

            printf("\nEnter New Name: ");
            scanf(" %49[^\n]", Newname);

            if(validate_name(Newname))
            {
                strcpy(addressBook->contacts[i].name, Newname);
                printf("\nName updated succesfully.\n");
            }
            else
            {
                printf("\nInvalid name.\n");
            }
            return;
        }
     }
     printf("\nContact not found.\n");
}



// EDIT_PHONE
void edit_phone(AddressBook *addressBook)
{
     char phone[20];
     char Newphone[20];
     int i;

     printf("\nEnter Phone Number to edit: ");
     scanf("%19s", phone);

     for(int i=0; i<addressBook->contactCount; i++)
     {
        if(strcmp(addressBook->contacts[i].phone, phone) == 0)
        {
            printf("\nContact found\n");

            printf("Name  : %s\n", addressBook->contacts[i].name);
            printf("Phone : %s\n", addressBook->contacts[i].phone);
            printf("Email : %s\n", addressBook->contacts[i].email);

            printf("\nEnter New Phone Number: ");
            scanf("%19s", Newphone);

            if(validate_phone(Newphone))
            {
                strcpy(addressBook->contacts[i].phone, Newphone);
                printf("\nPhone Number updated succesfully.\n");
            }
            else
            {
                printf("\nInvalid Phone Number.\n");
            }
            return;
        }
     }
     printf("\nContact not found.\n");
}




// EDIT EMAIL
void edit_email(AddressBook *addressBook)
{
     char email[50];
     char NewEmail[50];
     int i;

     printf("\nEnter Email to edit: ");
     scanf("%49s", email);

     for(int i=0; i<addressBook->contactCount; i++)
     {
        if(strcmp(addressBook->contacts[i].email, email) == 0)
        {
            printf("\nContact found\n");

            printf("Name  : %s\n", addressBook->contacts[i].name);
            printf("Phone : %s\n", addressBook->contacts[i].phone);
            printf("Email : %s\n", addressBook->contacts[i].email);

            printf("\nEnter New Email: ");
            scanf(" %49s", NewEmail);

            if(validate_email(NewEmail))
            {
                strcpy(addressBook->contacts[i].email, NewEmail);
                printf("\nEmail updated succesfully.\n");
            }
            else
            {
                printf("\nInvalid email.\n");
            }
            return;
        }
     }
     printf("\nContact not found.\n");
}



    

