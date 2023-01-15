
#include <stdio.h>
#include <string.h>

struct studentNode {
  char name[20];
  int age;
  char sex;
  float gpa;
  struct studentNode *next;
};

void InsNode(struct studentNode **preNode, char n[], int a, char s,float g); // prototype
void GoNext(struct studentNode ***ptr);     // prototype
void DelNode(struct studentNode **preNode); // prototype
void ShowAll(struct studentNode **walk);    // prototype

int main() {
  struct studentNode *start, **now;
  start = NULL;
  now = &start;
  InsNode(now, "one", 6, 'M', 3.11);
  ShowAll(&start);
  InsNode(now, "two", 8, 'F', 3.22);
  ShowAll(&start);
  GoNext(&now);
  InsNode(now, "three", 10, 'M', 3.33);
  ShowAll(&start);
  InsNode(now, "four", 12, 'F', 3.44);
  ShowAll(&start);
  GoNext(&now);
  DelNode(now);
  ShowAll(&start);
  return 0;
} // end function

void ShowAll(struct studentNode **walk) {
  while (*walk != NULL) {
    printf("%s ", (*walk)->name);
    walk = &(*walk)->next;
  } // end while
  printf(" ");
} // end function

void InsNode(struct studentNode **nowNode, char n[], int a, char s, float g) {
  struct studentNode *newNode = new studentNode;
  strcpy(newNode->name, n);
  newNode->age = a;
  newNode->sex = s;
  newNode->gpa = g;
  newNode->next = NULL;
  if (*nowNode == NULL) {
    *nowNode = newNode;
  } else {
    newNode->next = *nowNode;
    *nowNode = newNode;
  }
} // end function

void DelNode(struct studentNode **nowNode) {
  struct studentNode *delNode = (*nowNode)->next;
  (*nowNode)->next = delNode->next;
} // end function

void GoNext(struct studentNode ***preNode) {
  **preNode = (*(*preNode))->next;
} // end function
