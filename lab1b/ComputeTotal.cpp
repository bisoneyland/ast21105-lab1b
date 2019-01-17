#include <iostream>
using namespace std;

int main()
{
	int number;
	int total;
	int count;
	number = 0;
	cout << "Enter input";
	cin >> number;
	while (number != -1)
	{
		count = number;
		total = 0;//
		for (int i = 1; i <= count; i++)
		{
			cin >> number;
			total += number;
		};
		cout << endl << "Output" << total << endl;
		cout << "Enter input";
		cin >> number;

	};

	system("pause");
	return 0;
}