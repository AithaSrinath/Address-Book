#include<stdio.h>
#include"contact.h"

void load_ContactsFromFile(AddressBook *addressBook)
{
    FILE *fp;
    int i;

    fp = fopen("contacts.txt", "r");

    if(fp == NULL)
    {
         addressBook->contactCount = 0;
         return;
    }

    fscanf(fp, "%d", &addressBook->contactCount);

     for(int i=0; i<addressBook->contactCount; i++)
     {
         fscanf(fp, "%49s %10s %49s", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
     }
     fclose(fp);
}
