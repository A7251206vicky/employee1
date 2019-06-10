#include"Employee.h"
#include<iomanip>
using namespace std;
Employee::Employee()
{
	
}
Employee::Employee(string name, int age, char married, double salary)
{
	this->name = name;
	this->age = age;
	this->married = married;
	this->salary = salary;
}
void Employee::setName(string name)
{
	this->name = name;
}
void Employee::setAge(int age)
{
	this->age = age;
}
void Employee::setMarried(char married)
{
	this->married = married;
}
void Employee::setSalary(double salary)
{
	this->salary = salary;
}
string Employee::getName()
{
	return name;
}
int Employee::getAge()
{
	return age;
}
char Employee::getMarried()
{
	return married;
}
double Employee::getSalary()
{
	return salary;
}
void Employee::print()
{
	cout << getName() << " " << getAge() << " " << fixed << setprecision(1)
		<< getMarried() << " " << getSalary() << endl;
}
void Employee::readFromFile(fstream& in)
{
	in >> name >> age >> married >> salary;
}
void Employee::writeToFile(fstream& ouput)
{
	ouput << name << " " << age << " " << married << " "
		<< salary << endl;
}
