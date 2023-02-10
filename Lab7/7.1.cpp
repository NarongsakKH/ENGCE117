#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ;

class LinkedList {
  protected :
    struct studentNode *start, **now ;
  public :
    LinkedList() ; //��˹����������鹢ͧ start ��� now
    ~LinkedList() ; //�׹˹��¤����ӷ��ͧ�����ԧ����ʵ�ء�˹�
    void InsNode( char n[], int a, char s, float g ) ; //�á�˹����������͹�˹��Ѩ�غѹ
    void DelNode() ; //ź�˹��Ѩ�غѹ
  GoNext() ; //����¹�˹��Ѩ�غѹ仪�����˹��Ѵ�
    virtual void ShowNode() ; //�ʴ���������˹��Ѩ�غѹ
} ; //end class

class NewList : public LinkedList {
 public :
    GoFirst() ; //����¹�˹��Ѩ�غѹ仪�����˹��������
    virtual void ShowNode() ; //�ʴ�������㹷ء�˹������������鹶֧�ش����
} ; //end class

int main() {
 LinkedList listA ;
 NewList listB ;
 LinkedList *listC ;

 listA.InsNode( "one", 1, 'A', 1.1 ) ;
 listA.InsNode( "two", 2, 'B', 2.2 ) ;
 listA.InsNode( "three", 3, 'C', 3.3 ) ;
 listA.GoNext() ;
 listA.ShowNode() ;

 listB.InsertNode( "four", 4, 'D', 4.4 ) ;
 listB.InsertNode( "five", 5, 'E', 5.5 ) ;
 listB.InsertNode( "six", 6, 'F', 6.6 ) ;
 listB.GoNext() ;
 listB.DelNode() ;
 listB.ShowNode() ;

 listC = &listA;
 listC->GoNext() ;
 listC->ShowNode() ;

 listC = &listB ;
 listC->ShowNode() ;

 return 0 ;
}//end function

void LinkedList::InsNode( char n[], int a, char s, float g ) {
  	struct studentNode *temp = new studentNode ;
  	strcpy( temp->name, n ) ;
  	temp->age = a ;
  	temp->sex = s ;
  	temp->gpa = g ;

  	temp->next = *now ;
  	*now = temp ;
}// end function

void LinkedList::DelNode() {
  	struct studentNode *temp = *now ;
  	*now = (*now)->next ;
  	delete temp ;
}// end function

void LinkedList::GoNext() {
  	now = &((*now)->next) ;
}// end function

void LinkedList::ShowNode() {
  	cout << "Name : " << (*now)->name << endl ;
  	cout << "Age : " << (*now)->age << endl ;
  	cout << "Sex : " << (*now)->sex << endl ;
  	cout << "GPA : " << (*now)->gpa << endl ;
}// end function

void NewList::GoFirst() {
  	now = &start ;
}// end function

void NewList::ShowNode() {
  	GoFirst() ;
  	while ( *now != NULL ) {
    	cout << "Name : " << (*now)->name << endl ;
    	cout << "Age : " << (*now)->age << endl ;
    	cout << "Sex : " << (*now)->sex << endl ;
    	cout << "GPA : " << (*now)->gpa << endl ;
   	 	GoNext() ;
  }
}// end function
