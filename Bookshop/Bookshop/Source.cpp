#include<iostream>
#include<fstream>
#include<string.h.>
using namespace std;

struct book_details
{
	string book;
	string bookName;
	string bookAuthor;
	int quantity;
	float unitPrice;
};
void login();
void registration();
void Addbook();
void companydetails();
void Logout();
void view_company_details();

int main()
{

	int c;
	cout << "\n\n\n*---------------Genius BookShop Menu-----------------*\n\n\n" << endl;
	cout << "Press 1 to Register" << endl;
	cout << "Press 2 to Login" << endl;
	cout << "press 3 to Addbook" << endl;
	cout << "press 4 to View Company Details" << endl;
	cout << "Press 5 to Logout" << endl;

	cout << "Please enter your choice" << endl;
	cin >> c;
	cout << endl;

	switch (c)
	{

	case 1:
		registration();
		break;

	case 2:
		login();
		break;

	case 3:
		Addbook();
		break;

	case 4:
		view_company_details();
		break;

	case 5:
		Logout();
		break;

	default:

		system("Cls");
		cout << "Choose from available choices" << endl;
		main();

		break;
	}

}

void login()
{
	int count = 0;
	string userId, password, id, pass;
	system("cls");
	cout << "please enter the username and password : " << endl;
	cout << "USERNAME";
	cin >> userId;
	cout << "PASSWORD";
	cin >> password;

	ifstream input("records.txt");

	while (input >> id >> pass);
	{
		if (id == userId && pass == password)
		{
			count = 1;
			system("cls");

		}
		input.close();

		if (count == 1)
		{
			cout << userId << "Your LOGIN is successul and Thanks for logging in";
			main();

		}
		else {
			cout << "lOGIN ERROR and please check your username and password";
			main();

		}
	}
}


void registration()
{
	string ruserId, rpassword, rid, rpass;
	system("cls");
	cout << "Enter the username :";
	cin >> ruserId;
	cout << "Enter the password :";
	cin >> rpassword;

	ofstream f1("records.txt", ios::app);
	f1 << ruserId << ' ' << rpassword << endl;
	system("cls");
	cout << "Registraion is Successful!";
	main();

}


void view_company_details() {

	cout << "company name : genius book shop" << endl;
	cout << "company address : 104/21 galle road wellawatta" << endl;
	cout << "company contact number : 0719812297" << endl;
	cout << "company e-mail : geniusbookshop@gmail.com" << endl;
}

void Logout() {
	char Res = 'y';

	cout << "Do you want to logout from the system?y:" << endl;
	cin >> Res;
	if (Res == 'y') {
		cout << "Your are logged out form the system";
		cout << "\n\n Thank You " << endl;

	}
}
void Addbook() {
	system("cls");

	string book_name;
	int book_price = 0;
	int book_quantity = 0;
	int discount_amount = 0;

	float total = 0, Book_price = 0, Discount_Amount = 0;

	cout << "Enter book name :" << endl;
	cin >> book_name;

	cout << "Enter book price:" << endl;
	cin >> book_price;

	cout << "Enter discount amount:" << endl;
	cin >> discount_amount;

	cout << "Enter book quantity:" << endl;
	cin >> book_quantity;

	total = book_price * book_quantity;
	cout << "Total amount is :" << total << endl;

	discount_amount = total - discount_amount;
	cout << "Total amount with discount is:" << discount_amount << endl;


}


