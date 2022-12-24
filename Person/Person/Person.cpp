#include "Person.h"
#include <time.h>
int main()
{
	srand(time(NULL));
	Student studentArray[] = { {"Atakan","Yel",1000},{"Emre","Yel",1001},{"Aykan","Sayilkan",1002},{"Fatih","Ortatepe",1003} };
	Teacher teacher1("Mustafa", "Yel", "Software");
	for (int i = 0; i < 4; i++)
	{
		studentArray[i].setStudentGrade(rand() % 100 + 1);
		studentArray[i].print();
	}
	teacher1.passFailStatus(studentArray);
	teacher1.printStudentInformation(studentArray);
	
}

