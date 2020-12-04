// RetailItem Class
// Richardson Gage Milton
// 2020-12-04
#include <iostream>
#include <iomanip>
#include <string>
#include"RetailItem.cpp"
using namespace std;

int i[3];
string a[3];
int b[3];
double price[3];


void Process()
{
	a[0] = "Long Sleeve Shirt";
	b[0] = 40;
	price[0] = 34.95;

	for (int i = 1; i < 3; i++)
	{
		cout << "item " << i << endl;
		cout << "Please Enter Product Description: ";
		cin >> a[i];

		// loop until answer is greater than 0

		while (b[i] <= 0)
		{
			cout << endl << "Please Enter Product Quantity: ";
			cin >> b[i];
			if (b[i] <= 0)
			{
				cout << "Please enter a number greater than 0" << endl;

			}
		}
		while (price[i] <= 0)
		{
			cout << endl << "Please Enter Product Price: ";
			cin >> price[i];
			if (price[i] <= 0)
			{
				cout << "Please enter a number greater than 0" << endl;

			}
		}
	}
}
//**************************************************


class RetailItem
{

private:
	string description;  // Item description
	int unitsOnHand;     // Units on hand
	double price;        // Item price

public:
	// Constructor
	RetailItem(string d, int u, double p)
	{
		description = d; unitsOnHand = u; price = p;
	}



	// Mutators
	void setDescription(string d)
	{
		description = d;
	}

	void setUnitsOnHand(int u)
	{
		unitsOnHand = u;
	}

	void setPrice(double p)
	{
		price = p;
	}

	// Accessors
	string getDescription()
	{
		return description;
	}

	int getUnitsOnHand()
	{
		return unitsOnHand;
	}

	double getPrice()
	{
		return price;
	}
};

//**************************************************
// Function prototype
void displayItem(RetailItem);



//**************************************************

void displayItem(RetailItem item)
{
	cout << endl;
	cout << setprecision(2) << fixed << showpoint;

	cout << "Description: " << item.getDescription() << endl;
	cout << "Units on hand: " << item.getUnitsOnHand() << endl;
	cout << "Price: $" << item.getPrice() << endl << endl;
}

//**************************************************

void Output()
{
	// Create three RetailItem objects.
	RetailItem item1(a[0], b[0], price[0]);
	RetailItem item2(a[1], b[1], price[1]);
	RetailItem item3(a[2], b[2], price[2]);
	//RetailItem item3("Shirt", 20, 24.95);

	// Display each item's data.
	displayItem(item1);
	displayItem(item2);
	displayItem(item3);

	cout << "Total Units on hand: " << item1.getUnitsOnHand() + item2.getUnitsOnHand() + item3.getUnitsOnHand() << endl;

}

//**************************************************

int main()
{

	Process();
	Output();
	system("pause");
	return 0;
}

//**************************************************
