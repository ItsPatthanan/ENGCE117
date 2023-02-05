#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

class LinkedList
{
protected:
    struct studentNode *start, **now;

public:
    LinkedList();                                   // กำหนดค่าเริ่มต้นของ start และ now
    ~LinkedList();                                  // คืนหน่วยความจำที่จองไว้ในลิงค์ลิสต์ทุกโหนด
    void InsNode(char n[], int a, char s, float g); // แทรกโหนดใหม่อยู่ก่อนโหนดปัจจุบัน
    void DelNode();                                 // ลบโหนดปัจจุบัน
    GoNext();                                       // เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดถัดไป
    virtual void ShowNode();                        // แสดงข้อมูลในโหนดปัจจุบัน
};                                                  // end class

class NewList : public LinkedList
{
public:
    GoFirst();               // เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดเริ่มต้น
    virtual void ShowNode(); // แสดงข้อมูลในทุกโหนดตั้งแต่เริ่มต้นถึงสุดท้าย
};                           // end class

int main()
{
    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);
    listA.GoNext();
    listA.ShowNode();

    listB.InsertNode("four", 4, 'D', 4.4);
    listB.InsertNode("five", 5, 'E', 5.5);
    listB.InsertNode("six", 6, 'F', 6.6);
    listB.GoNext();
    listB.DelNode();
    listB.ShowNode();

    listC = &listA;
    listC->GoNext();
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode();

    return 0;
} // end function

void LinkedList::InsNode( char n[], int a, char s, float g ) {
  struct studentNode *temp = new studentNode ;
  strcpy( temp->name, n ) ;
  temp->age = a ;
  temp->sex = s ;
  temp->gpa = g ;

  temp->next = *now ;
  *now = temp ;
}

void LinkedList::DelNode() {
  struct studentNode *temp = *now ;
  *now = (*now)->next ;
  delete temp ;
}

void LinkedList::GoNext() {
  now = &((*now)->next) ;
}

void LinkedList::ShowNode() {
  cout << "Name : " << (*now)->name << endl ;
  cout << "Age : " << (*now)->age << endl ;
  cout << "Sex : " << (*now)->sex << endl ;
  cout << "GPA : " << (*now)->gpa << endl ;
}

void NewList::GoFirst() {
  now = &start ;
}

void NewList::ShowNode() {
  GoFirst() ;
  while ( *now != NULL ) {
    cout << "Name : " << (*now)->name << endl ;
    cout << "Age : " << (*now)->age << endl ;
    cout << "Sex : " << (*now)->sex << endl ;
    cout << "GPA : " << (*now)->gpa << endl ;
    GoNext() ;
  }
}