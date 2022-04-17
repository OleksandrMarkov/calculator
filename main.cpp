#include <iostream>
# include <math.h>
using namespace std;
int main(int argc, char** argv) {
	cout<< "1 - Rounding functions\n";
	cout<< "2 - PI value\n";
	cout<< "3 - Powers, Roots, Logarithms\n";
	cout<< "4 - Min/Max\n";
	cout<< "5 - Trigonometric functions\n";
	cout<< "6 - Exit\n";
	
	int choice;
	cout<<"Your choice: ";
	cin>> choice;
	cout<< endl;
	
	// Rounding functions
	if (choice == 1)
	{
		system("cls");
		cout << "Rounding functions:\n\n";
		float number;
		int submenu;
		
		cout<< "1 - Abs\n";
		cout<< "2 - Ceiling\n";
		cout<< "3 - Floor\n";
		cout<< "4 - Round\n\n";
		
		cout << "Round function: ";
		cin >> submenu;
		cout<< endl;
		
		cout << "Your number: ";
		cin >> number;
		cout<<endl;		
		
		if (submenu == 1)
		{
			cout << "Abs: " << abs(number) << endl;	
		}
		if (submenu == 2)
		{
			cout << "Ceiling: " << ceil(number) << endl;
		}
		if (submenu == 3)
		{
			cout << "Floor: " << floor(number) << endl;	
		}				
		if (submenu == 4)
		{
			cout << "Round: " << round(number) << endl;	
		}		
	}

	// PI functions	
	else if (choice == 2)
	{
		system("cls");
		cout << "PI functions:\n\n";
		float number;
		int submenu;
		
		cout<< "1 - PI\n";
		cout<< "2 - E\n\n";
				
		cout << "PI function: ";
		cin >> submenu;
		cout<< endl;
		
		cout << "Your number: ";
		cin >> number;
		cout<<endl;
		
		if (submenu == 1)
		{
			cout << "PI: " << M_PI * number << endl;	
		}
		if (submenu == 2)
		{		
			cout << "E: " << M_E * number<< endl;
		}
	}
	
	system("pause");
	return 0;
}
