#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "contact.h"


  //DELETE PROTOTYPE
void delete_Contact(AddressBook *addressBook)
{
    int option;
    if(addressBook->contactCount == 0)
    {
        printf("\nContact list is empty. Nothing to delete.\n");
        return;
    }

    printf("1. Delete by Name\n");
    printf("2. Delete by Phone\n");
    printf("3. Delete by email\n");

    printf("Choose option\n");
     scanf("%d", &option);

    switch(option)
    {
        case 1:
            delete_name(addressBook);
            break;
        case 2:
            delete_phone(addressBook);  
            break;
        case 3:
            delete_email(addressBook);
            break;
        default:
            printf("Invalid choice\n");        
    }

}




    //DELETE_NAME
void delete_name(AddressBook *addressBook)
{
    char name[50];
    char choice;
    int i;
    int j;
    int found = 0;

    printf("Enter Name to delete: ");
    scanf(" %49[^\n]", name);

    for(int i=0; i<addressBook->contactCount; i++)
    {
        if(strcmp(addressBook->contacts[i].name, name) == 0) 
        {
            found = 1;
         
            printf("\nContact found\n");

            printf("%-10s%-20s%-20s%-25s\n", "S.NO", "Name", "Phone No", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            

            printf("\nAre you sure you want to delete this contact? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                /* Shift contacts */
                for(int j=i; j<addressBook->contactCount-1; j++)
                {
                    addressBook->contacts[j] = addressBook->contacts[j+1];
                }
                addressBook->contactCount--;

                printf("\nContact Deleted Succussfully.\n");
            }
            else
            {
                 printf("\nDeletion Cancelled.\n");  
            }
             break;
        }
    }
     if(found == 0)
    {
        printf("\nContact not found\n");
    }
}



 //DELETE_PHONE
void delete_phone(AddressBook *addressBook)
{
    char phone[11];
    char choice;
    int i;
    int j;

    printf("Enter Phone Number to delete: ");
    scanf(" %10s[^\n]", phone);

    for(int i=0; i<addressBook->contactCount; i++)
    {
        if(strcmp(addressBook->contacts[i].phone, phone) == 0) 
        {
         
            printf("\nContact found\n");

            printf("%-10s%-20s%-20s%-25s\n", "S.NO", "Name", "Phone No", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            

            printf("\nAre you sure you want to delete this contact? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                /* Shift contacts */
                for(int j=i; j<addressBook->contactCount-1; j++)
                {
                    addressBook->contacts[j] = addressBook->contacts[j+1];
                }
                addressBook->contactCount--;

                printf("\nContact Deleted Succussfully.\n");
            }
            else
            {
                 printf("\nDeletion Cancelled.\n");  
            }
             return;
        }
    }
    
     printf("\nContact not found\n");
    
}



   // DELETE_EMAIL
void delete_email(AddressBook *addressBook)
{
    char email[50];
    char choice;
    int i;
    int j;
    

    printf("Enter Email to delete: ");
    scanf(" %49[^\n]", email);

    for(int i=0; i<addressBook->contactCount; i++)
    {
        if(strcmp(addressBook->contacts[i].email, email) == 0) 
        {
         
            printf("\nContact found\n");

            printf("%-10s%-20s%-20s%-25s\n", "S.NO", "Name", "Phone No", "Email");
            printf("%-10d", i+1);
            printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
            

            printf("\nAre you sure you want to delete this contact? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
        
                for(int j=i; j<addressBook->contactCount-1; j++)
                {
                    addressBook->contacts[j] = addressBook->contacts[j+1];
                }
                addressBook->contactCount--;

                printf("\nContact Deleted Succussfully.\n");
            }
            else
            {
                 printf("\nDeletion Cancelled.\n");  
            }
             return;
        }
    }
     printf("\nContact not found\n");
    
}   