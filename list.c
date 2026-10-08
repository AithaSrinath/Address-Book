#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "contact.h"

void list_Contacts(AddressBook *addressBook)
{
    int i;
    if(addressBook->contactCount == 0)
    {
        printf("No contacts available,\n");
        return;
    }

     printf("\n------ CONTACT LIST ------\n");
      printf("%-10s%-20s%-20s%-25s\n","S.NO", "Name", "Phone No", "Email");
     for(int i=0; i<addressBook->contactCount; i++)
    {
         printf("%-10d", i+1);
         printf("%-20s%-20s%-25s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
    }
}