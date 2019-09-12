#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "\n\t\t*** Welcome to a great day! ***\n";

	cout << "Please enter your name.";
	//creating a varianle of the data type string
	string userName;
	//gets input from console. get line grabs whole line, cin in only grabs first word.
	getline(cin, userName);
	//greet the user
	cout << "\nHello" << userName << "welcome to Jumanji";

	system("pause");

	return 0;
} 