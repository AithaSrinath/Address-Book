#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100

typedef struct contact
{
    char name[50];
    char phone[11];
    char email[50];
} Contact;

typedef struct AddressBook
{
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

void create_Contact(AddressBook *addressBook);
void search_Contact(AddressBook *addressBook);
void edit_Contact(AddressBook *addressBook);
void delete_Contact(AddressBook *addressBook);
void list_Contacts(AddressBook *addressBook);
void load_ContactsFromFile(AddressBook *addressBook);
void save_ContactsToFile(AddressBook *addressBook);

int validate_name(char* name);                  // USED IN CREATE.C
int validate_email(char* email);
int validate_phone(char* phone);

void search_name(AddressBook *addressBook);        // USED IN SEARCH_CONTACT
void search_phone(AddressBook *addressBook);
void search_email(AddressBook *addressBook);

void delete_name(AddressBook *addressBook);          //USED IN DELETE_CONTACT
void delete_phone(AddressBook *addressBook);
void delete_email(AddressBook *addressBook);

void edit_name(AddressBook *addressBook);            //USED IN EDIT_CONTACT
void edit_phone(AddressBook *addressBook);
void edit_email(AddressBook *addressBook);

#endif
