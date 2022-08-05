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
    for(int i = 0; key[i]; i++) value += (key[i] - 64);
    return value%hashTableSize;
}

int doubleHashValue(char key[]){
    int value = 0;
    for(int i = 0; key[i]; i++) value += (key[i] - 64);
    return (hashTableSize-2-value)%(hashTableSize-2);
}

void displayHashTable(){
    printf("\nHash Table : \n");
    for(int i = 0; i < 13; i++)
        printf("%d : %s\n", i, hashTable[i]);
}

void insertIntoHashTable(char key[]){
    int value = hashValue(key);
    int doubleValue = doubleHashValue(key);
    int originalValue = value;
    int i = 0;
    while(i++ < 13){
        if(!strcmp(hashTable[value], "EMPTY") || !strcmp(hashTable[value], "OCCUPIED")){
            strcpy(hashTable[value], key);
            printf("Key successfully inserted at position %d.\n", value);
            return;
        }
        value = value + i*doubleValue;
    }
    printf("Key can't be inserted.\n");
}

void deleteFromHashTable(char key[]){
    int value = hashValue(key);
    int originalValue = value;
    int doubleValue = doubleHashValue(key);
    int i = 0;
    while(i++ < 13){
        if(!strcmp(hashTable[value], key)){
            strcpy(hashTable[value], "OCCUPIED");
            printf("Key successfully deleted.\n");
            return;
        }
        value = value + i*doubleValue;
    }
    printf("Key not found.\n");
}

int main(){
    init();
    printf("MENU\n1. Display hash table\n2. Insert into hash table\n3. Delete from hash table\n4. Exit\n");
    int choice = 0;
    char key[50];
    while(1){
        printf("\nEnter choice : ");
        scanf("%d", &choice);
        if(choice == 1) displayHashTable();
        else if(choice == 2){
            printf("\nEnter key (string) to be inserted : ");
            scanf("%s", key);
            insertIntoHashTable(key);
        }
        else if(choice == 3){
            printf("\nEnter key (string) to be deleted : ");
            scanf("%s", key);
            deleteFromHashTable(key);
        }
        else break;
    }
    return 0;
}