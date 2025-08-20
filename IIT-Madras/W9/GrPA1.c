#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[50];
    struct Student *next;
};

struct Student* studentList()
{
    //Hint:
    // Allocate memory for new struct student
    // Read name and store inside name field of new struct
    // Store address of new struct into the next field of the previous student
    // Write solution code below
     struct Student *head = NULL, *tail = NULL, *newNode;
    char name[50];
    int flag;

    while (1)
    {
        // Allocate memory for new node
        newNode = (struct Student*)malloc(sizeof(struct Student));
        
        // Read student's name
        scanf("%s", newNode->name);
        newNode->next = NULL;

        // Add to list
        if (head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }

        // Read control flag
        scanf("%d", &flag);
        if (flag == 0)
            break;
    }
    return head;

}

int main()
{
    struct Student *head;
    head = studentList();
    while (head != NULL)
    {
        printf("%s\n",head->name);
        head = head->next;
    }
}