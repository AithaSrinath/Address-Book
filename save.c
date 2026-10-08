#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "contact.h"

void save_ContactsToFile(AddressBook *addressBook)
{
    FILE *fp;
    int i;

    fp = fopen("contacts.txt", "w");

    if(fp == NULL)
    {
       printf("Unable to open file.\n");
       return; 
    }

    fprintf(fp, "%d\n", addressBook->contactCount);

    for(int i=0;i<addressBook->contactCount; i++)
    {
        fprintf(fp, "%s %s %s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
    }
    fclose(fp); 
    printf("Contacts saved successfully.\n");
}
