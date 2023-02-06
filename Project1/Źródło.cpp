#include <iostream>
#include <string.h>
using namespace std;

class Phone
{
public:
	string brand{};
	string model{};
	int issYear{};
	double screen{};
	double price{};

	void print()
	{
		cout << "Brand: " << brand << '\n' << "Model: " << model << '\n' << "Year of issue: " << issYear << '\n' << "Screen size: " << screen << "'" << '\n' << "Price: " << price << '$' << '\n';
	}
};

/*void getBrand()
{

}*/

int main()
{
	cout << "Welcome!\n" << "How can I help you today?\n";
	goto skip1;
tryAgain:
		cout << "Wrong input, try again\n";
skip1:
	cout << "(1) Add a new phone to database\n" << "(2) Delete a phone from database\n" << "(3) Exit application\n";

	int x{};
	cin >> x;

	switch (x)
	{
	case 1:
		addPhone();
	case 2:
		//deletePhone();
	case 3:
		exit(0);
	default:
		goto tryAgain;
	}
}