#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int id;
	float rate, worked;

	id = 123;
	rate = 15.25;
	worked = 25;
	cout << "Salary Calculator" << endl;
	cout << "*****************" << endl;
	cout << "" << endl;
	cout << "Enter Employee ID:" << id << endl;
	cout << "Enter Hourly Rate:";
	cin >> rate;
	cout << "Enter Hours Worked:";
	cin >> worked;

	cout << "" << endl;
	cout << "Employee Information:" << endl;
	cout << "---------------------" << endl;
	cout << "Employee ID:" << id << endl;
	cout << fixed << setprecision(3);
	cout << "Hourly Rate:" << rate <<endl;
	cout << fixed << setprecision(3);
	cout << "Hours Worked:" << worked << endl;
	

	double average = (rate * worked);
	cout << fixed << setprecision(3);
	cout << "Gross Pay:" << average << endl;


	}