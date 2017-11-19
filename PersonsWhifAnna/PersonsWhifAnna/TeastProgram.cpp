#include "Employee.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main()
{

	Student *s1 = new Student("Johanna", "johanna@panda.se", 1996);
	cout << s1->toString() << endl << endl;

	Employee *e1 = new Employee("Hej", "Hej@panda.se", "DEAD");
	cout << e1->toString() << endl << endl;

	Person *p1 = new Employee("bla", "bla@panda.se", "DEAD");
	cout << p1->toString() << endl << endl;

	Person *p2 = new Student("drr", "drr@panda.se", 4554);
	cout << p2->toString() << endl << endl;



	delete s1;
	delete e1;
	delete p1;
	delete p2;


	system("pause");
	return 0;
}



