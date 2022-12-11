#include <iostream>
using namespace std;
struct node { int Data; node* next; };
node* head = NULL;
void insert_node(int value);
void Delete_node(int value );
void Display_node();
int main() {

	insert_node(5);
	insert_node(90);
	insert_node(1);
	insert_node(20);
	insert_node(10);
	Delete_node(1);
	Display_node();


	return 0; 
}
void insert_node(int value) {
	node* new_node,*last;
	new_node = new node;
	new_node->Data = value;
	if (head == NULL) {
		head = new_node;
		new_node->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL) {
			last = last->next;
		}
			last->next = new_node;

			new_node->next = NULL;
		
	}



}
void Delete_node(int value) {
	node* temp1, * temp2;
	temp1 = head;
	temp2 = head;
	if (temp1->Data == value) {
		head = temp1->next;
		free(temp1);
		return;
	}
	while (temp1->Data != value) {
		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp2->next = temp1->next;
	free(temp1);
}
void Display_node() {
	node* temp;
	if (head == NULL) {
		cout << "EMPTY \n";
	}
	else {
		temp = head;
		while (temp->next != NULL) {
			cout << temp->Data << endl;
			temp = temp->next;
		}
		if (temp->next == NULL) cout << temp->Data<<endl;
	}
}