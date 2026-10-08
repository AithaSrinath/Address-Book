#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "contact.h"
//#include "file.h"
//#include "populate.h"

 //VALIDATE_NAME
int validate_name(char name[])
{
  int i;
  if(name[0] == '\0')  
  {
    printf("Name cannot be Empty\n");
    return 0;
  }
   for(int i=0; name[i] != '\0'; i++)
    {
      if(!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' ')))
       {
        printf("Name should contain only Alphabets or spaces");
         return 0;
       }
    }
    return 1;
}



 //VALIDATE_PHONE
int validate_phone(char phone[])
{
   int i;
   if(strlen(phone) != 10)
   {
     return 0;
   }
    if(phone[0] < '6' || phone[0] > '9')
    {
      return 0;
    }
    for(int i=0; phone[i] != '\0'; i++)
    {
       if(!isdigit(phone[i])) 
       {
         return 0;
       }
    }
    return 1;
}



 // VALIDATE_EMAIL
int validate_email(char email[])
{
   int i;
   int at = 0;
   int dot = 0;

   for(int i=0; email[i] != '\0'; i++)
   {
      if(email[i] == '@')
      {
         at++;

         if(i == 0)
         return 0;
      }
      if(email[i] == '.')
      {
          dot++;

          if(i == 0)
           return 0;
      }  
   }
    if(at != 1)
    
      return 0;
     
    if(dot == 0)
    
      return 0; 
      
    
  return 1;
}


   // VALIDATION PART

 void create_Contact(AddressBook *addressBook)
{
    char name[50];
    char phone[20];
    char email[50];
     while(1)
     {
         // NAME VALIDATION
         printf("Enter Name :");
          scanf(" %49[^\n]",name);
         if(validate_name(name))
         {
            strcpy(addressBook->contacts[addressBook->contactCount].name, name);
             break;
         }
           printf("Invalid name. Enter alphabets and spaces only.\n");
      }

      while(1)
      {
         // PHONE VALIDATION
         printf("Enter Phone number :");
          scanf(" %[^\n]",phone);
         if(validate_phone(phone))
         {
            strcpy(addressBook->contacts[addressBook->contactCount].phone, phone);
             break; 
         }
            printf("Invalid phone number. Enter 10 digits starting from 6-9");
      }

       while(1)
      {
          // EMAIL VALIDATION
          printf("Enter Email :");
          scanf(" %[^\n]",email);
         if(validate_email(email))
         {
            strcpy(addressBook->contacts[addressBook->contactCount].email, email);
             break; 
         }
            printf("Invalid email.\n");
      }
   
 
    addressBook->contactCount++;
    printf("\nContact created succussfully!\n");
}     


 