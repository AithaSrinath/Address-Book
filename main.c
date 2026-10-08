/* Name: A.Srinath
   Date: 15/9/2026
   Description: The Address Book Project is a C-based application created to handle contact records.
                It allows users to maintain, update, and retrieve contact details whenever needed.
                The project demonstrates the use of structures,functions,arrays,and file handling in C.*/

#include <stdio.h>
#include "contact.h"

int main()
{
    
    AddressBook addressBook;
   // initialize(&addressBook); // Initialize the address book
    addressBook.contactCount = 0;
    load_ContactsFromFile(&addressBook);
    printf("Loaded contacts: %d\n", addressBook.contactCount);
     
    int choice;

    do 
    {
        printf("\nAddress Book Menu:\n");
        printf("1. Create contact\n");
        printf("2. Search contact\n");
        printf("3. Edit contact\n");
        printf("4. Delete contact\n");
        printf("5. List all contacts\n");
        printf("6. Save and Load\n");
        
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        
        while(getchar() != '\n');

        switch (choice) 
        {
            case 1:
                create_Contact(&addressBook);
                break;
            case 2:
                search_Contact(&addressBook);
                break;
            case 3:
                edit_Contact(&addressBook);
                break;
            case 4:
                delete_Contact(&addressBook);
                break;
            case 5:
                // printf("Select sort criteria:\n");
                // printf("1. Sort by name\n");
                // printf("2. Sort by phone\n");
                // printf("3. Sort by email\n");
                // printf("Enter your choice: ");
                // int sortChoice;
                // scanf("%d", &sortChoice);
                list_Contacts(&addressBook);
                break;
            case 6:
            //    printf("Saving and Exiting...\n");
                save_ContactsToFile(&addressBook);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
     while (choice != 6);
      return 0;
}

