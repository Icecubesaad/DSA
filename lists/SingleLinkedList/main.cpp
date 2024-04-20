#include "linkedList.h"
int main() {
	LinkedList l1;
	l1.insert_at_tail(7);
	l1.insert_at_tail(8);
	l1.insert_at_head(9);
	l1.insert_at_particular_position(2, 10);
	l1.display();
	return 0;
}