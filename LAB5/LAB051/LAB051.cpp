#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 1;
	int min = 0;
	int counter = 0;

	//do {
	//	cout << "Enter an integer Num ";
	//	cin >> num ;
	//}while  (num != 0);

	cout << "you have entered" << counter -1 << "integers" << endl;
	cout << "The minimum value is " << min << endl;

	for (counter = 0; num != 0; counter++)
	{
		cout << "Enter an integer Num ";
		cin >> num ;

	}



	return 0;
}