//Closed hashing by linear probing
#include<stdio.h>
#include<string.h>

char hashTable[13][50];
int hashTableSize = 13;

void init(){
    for(int i = 0; i < 13; i++) strcpy(hashTable[i], "EMPTY");
}

int hashValue(char key[]){
    int value = 0;
    for(int i = 0; key[i]; i++) value += (key[i] - 96);
    return value%13;
}

void displayHashTable(){
    printf("\nHash Table : \n");       
    for(int i = 0; i < 13; i++)
        printf("%d : %s\n", i, hashTable[i]);
}

void insertIntoHashTable(char key[]){
    int value = hashValue(key);
    int originalValue = value;
    while(1){
        if(!strcmp(hashTable[value], "EMPTY") || strcmp(hashTable[value], "OCCUPIED")){
            strcpy(hashTable[value], key);
            printf("\nKey successfully inserted at position %d.\n", value);
            return;
        }
        value = value == hashTableSize - 1 ? 0 : value + 1;
        if(value == originalValue){
            printf("\nKey can't be inserted.\n");
            return;
        }
    }
}

void deleteFromHashTable(char key[]){
    int value = hashValue(key);
    int originalValue = value;
    while(1){
        if(!strcmp(hashTable[value], key)){
            strcpy(hashTable[value], "OCCUPIED");
            printf("\nKey successfully deleted.\n");
            return;
        }
        value = value == hashTableSize - 1 ? 0 : value + 1;
        if(value == originalValue){
            printf("\nKey not found.\n");
            return;
        }
    }
}

int main(){
    init();
    printf("MENU\n1. Display hash table\n2. Insert into hash table\n3. Delete from hash table\n4. Exit\n");
    int choice = 0;
    char key[50];
    while(1){
        printf("Enter choice : ");
        scanf("%d", &choice);
        if(choice == 1) displayHashTable();
        else if(choice == 2){
            printf("Enter key (string) to be inserted : ");
            scanf("%s", &key);
            insertIntoHashTable(key);
        }
        else if(choice == 3){
            printf("Enter key (string) to be deleted : ");
            scanf("%s", &key);
            deleteFromHashTable(key);
        }
        else break;
    }
    return 0;
}