#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	cout << "Enter input:  ";
	cin >> number;
	while (number != -1)
	{
		int count = number;
		int total = 0;
		for (int i = 1; i <= count; i++)
		{
			cin >> number;
			total += number;
		};
		cout << "Output total: " << total << endl;
		cout << "Enter input:  ";
		cin >> number;

	};

	system("pause");
	return 0;
}