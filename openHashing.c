//Open Hashing
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node* Nodeptr;
typedef struct Node{
    char data[50];
    Nodeptr next;
}Node;

Nodeptr head[7];
int hashTableSize = 7;

void init(){
    for(int i = 0; i < 7; i++){
        head[i] = (Nodeptr)malloc(sizeof(Node));
        strcpy(head[i]->data, "EMPTY");
        head[i]->next = NULL;
    }
}

int hashValue(char key[]){
    int value = 0;
    for(int i = 0; key[i]; i++) value += (key[i] - 64);
    return value%hashTableSize;
}

void displayHashTable(){
    Nodeptr curr;
    for(int i = 0; i < 7; i++){
        printf("%d : ", i);
        curr = head[i];
        while(curr){
            printf("%s ---> ", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }
}

void insertIntoHashTable(char key[]){
    int value = hashValue(key);
    Nodeptr curr = head[value];
    if(!strcmp(curr->data, "EMPTY")){
        strcpy(curr->data, key);
        printf("Successfully Inserted.\n");
        return;
    }
    while(curr->next) curr = curr->next;
    Nodeptr newNode = (Nodeptr)malloc(sizeof(Node));
    strcpy(newNode->data, key);
    newNode->next = NULL;
    curr->next = newNode;
    printf("Successfully Inserted.\n");
}

void deleteFromHashTable(char key[]){
    int value = hashValue(key);
    Nodeptr curr = head[value];
    if(!strcmp(curr->data, key)){
        if(curr->next){
            head[value] = curr->next;
            printf("Successfully Deleted.\n");
            return;
        }
        strcpy(curr->data, "EMPTY");
        printf("Successfully Deleted.\n");
        curr->next = NULL;
        return;
    }
    while(curr->next){
        if(!strcmp(curr->next->data, key)){
            curr->next = curr->next->next;
            printf("Successfully Deleted.\n");
            return;
        }
        curr = curr->next;
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